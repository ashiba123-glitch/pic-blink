/*
 * File:   WITHFUNCTIONLCD.c
 * Author: SHINIMOL T S
 *
 * Created on 2 August, 2024, 9:54 AM
 */


#include <xc.h>
void data (unsigned char a);

void main(void)
{
TRISC=TRISD=0X00;
data(0x01);//ith data call chayunn//
data(0X0F);
return;
}
void data (unsigned char a)
{
RC0=0;
RC1=0;
PORTD=a;
RC2=1;
    for(int i=0;i<100;i++);
    RC2=0;
    for(int i=0;i<5000;i++);//ivide delay koodthal kodkna display clear akan korach time vnm//


}
