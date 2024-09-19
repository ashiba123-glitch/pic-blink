/*
 * File:   tmr1.c
 * Author: SHINIMOL T S
 *
 * Created on 26 August, 2024, 9:18 AM
 */


#include <xc.h>
void delay (void);

void main(void) 
{
    TRISC=0X00;//in//
    //TRISD=0X00;//out//
    T1CON=0X31;//register//
    TMR1=00;
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
            TMR1=00;//initial value set chyunn//
        }
    }
    
    


