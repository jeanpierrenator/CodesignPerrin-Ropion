#ifndef PWM_H
#define PWM_H
#include "pwmPioDriver.h"
#include <stdio.h>

void initPWM();
void setCanal(char num , char state);
void updateValue(char num,short ton);
void updateTon(short ton);
char isOn(char num);
#endif
