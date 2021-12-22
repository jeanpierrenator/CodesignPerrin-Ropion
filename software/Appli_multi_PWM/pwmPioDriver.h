#ifndef PWMPIODRIVER_H
#define PWMPIODRIVER_H
#include "system.h"
#include "altera_avalon_pio_regs.h"

void setlatch(int value);
void setTon(short value);
void setOnOff(int value);

int readOnOff();
#endif
