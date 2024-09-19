/*
 * File:   10secdelay.c
 * Author: SHINIMOL T S
 *
 * Created on 27 August, 2024, 4:34 PM
 */


#include <xc.h>
#define fosc 20000000// no need of semi colon
#define pre 16//pre scaler
#define  POS 16//post scale 1 to 16//extra over flow ethra ondenn arynn vndittanu//
#define del .01//delay 10MS
#define a ((int)(fosc *del)/(4*pre*POS))//eqn pre defined value
void delay(void);
void main(void) {

    TRISC=0X00;
    T2CON=0X7e;//TIMER CONFIGURE
  PR2=a; //period register a ilanu value edknne//
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
    PR2=a;//INITIAL TIMER VALUE ITH VARY CHEYYAAM DELAY KURAYKKUNNA ANSARICH
 
}
 //eqn idumbo float varum athukond nammakk int aakkanm so type cast
