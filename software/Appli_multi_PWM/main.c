/**
main.c

contient toutes la logique du programme
*/ 
#include <stdio.h>

#include <math.h>

#include "sys/alt_irq.h"

#include "system.h"

#include "altera_avalon_pio_regs.h"

#include "alt_types.h"

#include "ihm_lcd.h"

#include "pwm.h"

#define SWMILLIER IORD_ALTERA_AVALON_PIO_DATA(SWITCH_BASE) & 0b1000
#define SWCENTAINE IORD_ALTERA_AVALON_PIO_DATA(SWITCH_BASE) & 0b100
#define SWDIZAINE IORD_ALTERA_AVALON_PIO_DATA(SWITCH_BASE) & 0b10
#define SWUNITER IORD_ALTERA_AVALON_PIO_DATA(SWITCH_BASE) & 0b1
#define BOUTON_ACTIVATION 6
#define BOUTON_REGLAGE 5
#define BOUTON_CANAL 3

/* initialisation buffer pwmTon*/
short pwmTon[24] = {
  512,
  512,
  512,
  512,
  512,
  512,
  512,
  512,
  512,
  512,
  512,
  512,
  512,
  512,
  512,
  512,
  512,
  512,
  512,
  512,
  512,
  512,
  512,
  512
};

char numCanal = 0;
char lastNumCanal = 1;
short newTon = 0;
short increment = 5;
char updateOnOff = 0;
char digit;
void boutonInterupt(void * isr_context);
void initInterupt();

int main() {


  /*initialisation*/
  initLCD();
  initPWM();
  initInterupt();
  alt_ic_isr_register(BUTTON_IRQ_INTERRUPT_CONTROLLER_ID, BUTTON_IRQ, boutonInterupt, NULL, NULL);
 /* fin initialisation*/ 

  while (1) {

    /* gestion changement de canal */
    if (numCanal != lastNumCanal) {
      lastNumCanal = numCanal;
      writeCanal(numCanal);
      writeOnOff(isOn(numCanal));
      writeTon(pwmTon[numCanal]);
    }

    /*gestion changement de ton*/
    if (newTon) {
      newTon = 0;
      /** traitement increment **/
      switch (increment) {
      case 3:
      /* incrementation des milliers*/
        if (pwmTon[numCanal] < 1000) {
          pwmTon[numCanal] = 1000;
        } else {
          pwmTon[numCanal] = 0;
        }
        break;
      case 2:
      /* incrementation des centaines*/
        if (pwmTon[numCanal] < 1000) {
          if ((pwmTon[numCanal] / 100) % 10 == 9) {
            pwmTon[numCanal] -= 900;
          } else {
            pwmTon[numCanal] += 100;
          }
        }
        break;
      case 1:
      /* incrementation des dizaines*/
        if (pwmTon[numCanal] < 1000) {
          if ((pwmTon[numCanal] / 10) % 10 == 9) {
            pwmTon[numCanal] -= 90;
          } else {
            pwmTon[numCanal] += 10;
          }
        } else {
          /* max dizaine = 2 quand pwm est > 1000 */
          if ((pwmTon[numCanal] / 10) % 10 == 2) {
            pwmTon[numCanal] -= 20;
          } else {
            pwmTon[numCanal] += 10;
          }
        }
        break;
      case 0:
      /* incrementaion unité */
        if (pwmTon[numCanal] < 1000) {
          if ((pwmTon[numCanal] / 1) % 10 == 9) {
            pwmTon[numCanal] -= 9;
          } else {
            pwmTon[numCanal] += 1;
          }
        } else {
          /* max unités = 3 quand pwm est > 1000 */
          if ((pwmTon[numCanal] / 1) % 10 == 3) {
            pwmTon[numCanal] -= 3;
          } else {
            pwmTon[numCanal] += 1;
          }
        }
        break;

      }

      /** execute new ton**/
      updateValue(numCanal, pwmTon[numCanal]);
      /** print new Ton**/
      writeTon(pwmTon[numCanal]);
      increment = 5;
    }

    /* gestion On off*/
    if (updateOnOff) {
      updateOnOff = 0;
      setCanal(numCanal, 1 ^ isOn(numCanal));
      writeOnOff(isOn(numCanal));
    }

  }
  return 0;
}

void boutonInterupt(void * isr_context) {
  int state = IORD_ALTERA_AVALON_PIO_DATA(BUTTON_BASE);

  /* reset interrupt. */
  IOWR_ALTERA_AVALON_PIO_EDGE_CAP(BUTTON_BASE, 0);
  /* Read the PIO to delay ISR exit. This is done to prevent a
  spurious interrupt in systems with high processor -> pio
  latency and fast interrupts. */
  IORD_ALTERA_AVALON_PIO_EDGE_CAP(BUTTON_BASE);

  /**
  interruption bouton canal
  incrémentation de numCanal
  */
  if (BOUTON_CANAL == state) {
    if (numCanal < 23) {
      numCanal += 1;
    } else {
      numCanal = 0;
    }

  }

  /**
     interruption bouton Ton
     Choix de la valuer de increment en fonction des switch 
     */
     if(BOUTON_REGLAGE == state){
         if(SWMILLIER){
             increment = 3;
         }else if(SWCENTAINE){
             increment = 2;
         }else if(SWDIZAINE){
             increment = 1;
         }else if(SWUNITER){
             increment = 0;
         }
         newTon = 1;



     }

     /* interruption bouton OnOff*/
     if(BOUTON_ACTIVATION == state){
         updateOnOff = 1;
     }

}

void initInterupt(){
  void* edge_capture_ptr = (void*) &edge_capture; /* Enable all 3 button interrupts. */
  IOWR_ALTERA_AVALON_PIO_IRQ_MASK(BUTTON_BASE, 0b111); /* Reset the edge capture register. */
  IOWR_ALTERA_AVALON_PIO_EDGE_CAP(BUTTON_BASE, 0b000); /* Register the ISR. */
  alt_ic_isr_register(BUTTON_IRQ_INTERRUPT_CONTROLLER_ID, BUTTON_IRQ, boutonInterupt, edge_capture_ptr, 0x0);
}