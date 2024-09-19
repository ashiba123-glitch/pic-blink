/*
 * File:   1sec.c
 * Author: SHINIMOL T S
 *
 * Created on 26 August, 2024, 8:49 AM
 */


#include <xc.h>
void delay(void);
void main(void) {
    TRISC=0X00;
    T0CON=0XC7;//TIMER CONFIGURE
    TMR0=60.68;  
     while(1)
    {
            PORTC=0XFF;
            delay();
            PORTC=0X00;
            delay();
    }
    return;
}
void delay(void)
{
    for(int i=0;i<100;i++)
    {
    while(TMR0IF==0);//FLAG 1 AANONN CHECK CHEYYAAN(OVERFLOW AAYONNN ARYAAN)
    TMR0IF=0;//1 AAYAL 0 AAKAAN
    TMR0=60.68;//INITIAL TIMER VALUE ITH VARY CHEYYAAM DELAY KURAYKKUNNA ANSARICH
}
}
