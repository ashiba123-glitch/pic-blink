/*
 * File:   pwm1.c
 * Author: SHINIMOL T S
 *
 * Created on 28 August, 2024, 8:53 AM
 */


#include <xc.h>
//void delay (void);

void main(void) {
    TRISC=0X00;
    T1CON=0X31;//register//
    TMR1=00;
    CCP1CON=0X02;//toggle//
    CCPR1H=0X20;//compare//
    CCPR1L=0X10;//compare//
    while(1)
    {
        
    }
}

    