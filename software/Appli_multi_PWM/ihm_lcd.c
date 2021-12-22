#include "ihm_lcd.h"

FILE * fp;
char buffer[32] = "C              \nP               ";


void customPrintf(){
	fprintf(fp,"\x1B[2J");
	fprintf(fp,"%.*s",32,buffer);
	fflush(fp);

}

void initLCD(){
	fp = fopen("/dev/lcd_16207_0", "w");
	fprintf(fp,"\x1B[2J");

}
/**
writeCaracter(char caracter,char pos);
Char caracter : le caractère à écrire sur l’écran
Char pos : nombre entre 0 et 31. La position sur l’écran
Fonction pour écrire un caractère dans le buffer de l’écran
*/
void writeCaracter(char caracter,char pos){
	buffer[pos] = caracter;

}
/**
WriteOnOff(char etats)
bool états : 1 = « on » 0 = « off »
Fonction pour afficher l’états on ou off sur l’écran
*/
void writeOnOff(char etat){
	if(!etat)
	{
		writeCaracter('O',12);
		writeCaracter('N',13);
		writeCaracter(' ',14);

	}
	else
	{
		writeCaracter('O',12);
		writeCaracter('F',13);
		writeCaracter('F',14);
	}
	customPrintf();
}

/**
Nom fonction 	writeCanal(char numCanal)
Paramètres 	Char numCanal : le numéros du canal à afficher 
Commentaire 	Fonction pour afficher le numéros de canal actuel 
*/
void writeCanal(char num){
	char snum[2];
	if (num >= 0 && num <= 23){
	sprintf(snum, "%0.2d", num);
	writeCaracter(snum[0],2);
	writeCaracter(snum[1],3);
	customPrintf();
	}
}

/**
Nom fonction 	writeTon(int Ton)
Paramètres 	Int Ton : le Ton à afficher 
Commentaire 	Fonction pour afficher le Ton 
*/
void writeTon(int Ton){
	char snum[4];
	sprintf(snum, "%0.4d", Ton);
	writeCaracter(snum[0], 18);
	writeCaracter(snum[1], 19);
	writeCaracter(snum[2], 20);
	writeCaracter(snum[3], 21);
	customPrintf();
}

