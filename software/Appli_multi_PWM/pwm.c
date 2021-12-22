#include "pwm.h"

void initPWM(){
	setOnOff(0b111111111111111111111111);
	setlatch(0b111111111111111111111111);
	setTon(512);
	usleep(100);
	setlatch(0b000000000000000000000000);
}
/**
Nom fonction 	void setCanal(char num , char state)
Paramètre 		Char num : le canal concerné 
				Char state : « 1 » allumé « 0 » éteindre
Commentaire 	Fonction pour allumer ou éteindre un canal 

*/
void setCanal(char num , char state){
	int retour;
	retour = readOnOff();
	if(!state){
		setOnOff((1<<num)|retour);

	}else{
		setOnOff(retour & ~(1<<num));

	}
}
/**
Nom fonction 	void updateValue(char num,short ton)
Paramètre 	Char num : le canal concerné 
Char Ton Valeur de Ton
Commentaire 	Fonction pour changer le Ton
*/
void updateValue(char num,short ton){
	setlatch((1<<num));
	setTon(ton);
	usleep(1000);
	setlatch((0<<num));
}
void updateTon(short ton){
	setTon(ton);
}
/**
Nom fonction 	char isOn(char num)
Paramètre 	Char num : le canal concerné 
Retour	Char : 0 canal éteint 1 canal allumé 
Commentaire 	Retourne si le canal est allumée ou non 

*/
char isOn(char num){
    if(!(readOnOff()&(1<<num))){
        return 1;
    }else{
        return 0;
    }
}
