/*
 * File:   driverkeypadcalculator.c
 * Author: SHINIMOL T S
 *
 * Created on 12 August, 2024, 9:07 AM
 */


#include <xc.h>


void main(void)

    unsigned char keypad(void)
{
    while(1)
    {
    PORTB=0X0E;
    if(RB4==0)
    {
        return 0;
    }
    else if(RB5==0)
    {
        return 1;
    }
    else if(RB6==0)
    {
        return 2;
    }
    else if(RB7==0)
    {
        return 3;
    }
    PORTB=0X0D;
     if(RB4==0)
    {
         return 4;
    }
    else if(RB5==0)
    {
        return 5;
    }
    else if(RB6==0)
    {
        return 6;
    }
    else if(RB7==0)
    {
        return 7;
    }
PORTB=0X0D;
     if(RB4==0)
    {
         return 4;
    }
    else if(RB5==0)
    {
        return 5;
    }
    else if(RB6==0)
    {
        return 6;
    }
    else if(RB7==0)
    {
        return 7;
    }
PORTB=0X0B;
     if(RB4==0)
    {
         return 8;
    }
    else if(RB5==0)
    {
        return 9;
    }
    else if(RB6==0)
    {
        return 10;
    }
    else if(RB7==0)
    {
        return 11;
    }
    PORTB=0X07;
    if(RB4==0)
    {
        return 12;
    }
    else if(RB5==0)
    {
        return 13;
    }
    else if(RB6==0)
    {
        return 14;
    }
    else if(RB7==0)
    {
        return 15;
    }
}
}
