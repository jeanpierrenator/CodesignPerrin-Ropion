#include "pwmPioDriver.h"


/**
Nom fonction:		void setlatch(int value)
Paramètre:		 	Int value : la valeur du latch
Commentaire:		Ecrire la valeur du latch  sur le PIO dédiée
*/
void setlatch(int value){
	IOWR_ALTERA_AVALON_PIO_DATA(PWM_LATCH_BASE,value);
}

/**
Nom fonction:	 	void setTon(short value);
Paramètre:		 	short value : valeur du Ton à écrire 
Commentaire:	 	Ecrire la valeur de Ton sur le PIO dédiée 

*/
void setTon(short value){
	IOWR_ALTERA_AVALON_PIO_DATA(PWM_TON_BASE,value);
}
/**
Nom fonction 	Void setOnOff(int value)
Paramètre 	Int value : la valeur du OnOff à changer 
Commentaire 	Ecrire la valeur de Oe sur le PIO dédiée 
*/
void setOnOff(int value){
	IOWR_ALTERA_AVALON_PIO_DATA(PWM_ONOFF_BASE,value);
}
/**
Nom fonction 	Int ReadOnOff()
Retour 	Int : l’états du pio oe
Commentaire 	Lecture de l’état du PIO oe

*/
int readOnOff(){
	return IORD_ALTERA_AVALON_PIO_DATA(PWM_ONOFF_BASE);
}
