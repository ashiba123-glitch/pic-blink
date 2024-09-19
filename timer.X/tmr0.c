/*
 * File:   tmr0.c
 * Author: SHINIMOL T S
 *
 * Created on 23 August, 2024, 9:27 AM
 */


#include <xc.h>
void delay (void);

void main(void) 
{
    TRISC=0X00;//in//
    //TRISD=0X00;//out//
    T0CON=0XC7;//register//
    TMR0=00;
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
        while (TMR0IF==0);//flag set chyuunn//
        {
            TMR0IF=0;//clear cheyunn//
            TMR0=00;//initial value set chyunn//
        }
    }
    
    


