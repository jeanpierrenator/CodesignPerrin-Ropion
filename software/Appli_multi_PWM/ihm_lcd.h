#ifndef __SYSTEM_H_
#define __SYSTEM_H_
#include <stdio.h>
#include <stdlib.h>

void initLCD();
void writeCaracter(char caracter,char pos);
void writeOnOff(char etat);
void writeCanal(char numCanal);
void writeTon(int Ton);
#endif
