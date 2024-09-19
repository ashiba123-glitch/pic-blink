/*
 * File:   SWITCHES.c
 * Author: SHINIMOL T S
 *
 * Created on 30 July, 2024, 9:18 AM
 */


#include <xc.h>

void main(void) {
    TRISC=0XFF;//input//
    TRISD=0X00;//output//
    while(1)
        
    {
        if(RC0==1)
        {
            PORTD=0XFF;//on condition//
        }
        else
        {
            PORTD=0X00;//off condition//
    }
    }
   
    return;
}
