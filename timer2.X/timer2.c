/*
 * File:   timer2.c
 * Author: SHINIMOL T S
 *
 * Created on 27 August, 2024, 4:06 PM
 */


#include <xc.h>
void delay(void);
 //int a;
// a=((int)(1/(20000000))4*16(256)*16);
void main(void) {

    TRISC=0X00;
    T2CON=0X7e;//TIMER2 CONFIGURE
    PR2=255;//ivide 255 kittunna maximum delay kittan ethra value edkunno avdem thottu 255 vara ivde timer 2 specify chynda pr2 ittal mathi//
   // TMR2=a; 
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
   
    while(TMR2IF==0);//FLAG 1 AANONN CHECK CHEYYAAN(OVERFLOW AAYONNN ARYAAN)
    TMR2IF=0;//1 AAYAL 0 AAKAAN
   // TMR2=a;//INITIAL TIMER VALUE ITH VARY CHEYYAAM DELAY KURAYKKUNNA ANSARICH
PR2=255;
}
