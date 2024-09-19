/*
 * File:   timer1dl.c
 * Author: SHINIMOL T S
 *
 * Created on 26 August, 2024, 9:37 AM
 */


#include <xc.h>
void delay (void);
int a;
#define fosc 20000000//ivide define koduthal extra memory povilla//
#define pre 8
#define del 0.1
#define max 65536
#define a max-((int)(fosc*del)/(4*pre));





void main (void)


{
    TRISC=0X00;//in//
    //TRISD=0X00;//out//
    T1CON=0X31;//register//
    TMR1=a;
    while(1)
    {
        PORTC=0XFF;//blink operation//
        delay();
        PORTC=0X00;
        delay();
        
    }
    return;
}
    void delay (void)
    {
        while (TMR1IF==0);//flag set chyuunn//
        {
            TMR1IF=0;//clear cheyunn//
            TMR1=a;//initial value set chyunn//
        }
    }
    
    


