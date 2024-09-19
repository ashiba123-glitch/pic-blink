/*
 * File:   clkwiseanticlkstop.c
 * Author: SHINIMOL T S
 *
 * Created on 1 August, 2024, 9:14 AM
 */


#include <xc.h>
void delay(void);//declere chyth//
void main(void) 
{
    TRISC=0X00;//direction set chyth//
    while(1)
    {
        PORTC=0X01;//clockwise//
        delay();//function call/
        PORTC=0X02;//anti clk wise//
        delay();
        PORTC=0X00;//stop//
        delay();
    }
}//main function stop//
    void delay (void)//definition function porathu define chyth//
    {
        for(unsigned int i=0;i<65000;i++);
    }
   

