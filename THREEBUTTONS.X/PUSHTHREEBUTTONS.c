/*
 * File:   PUSHTHREEBUTTONS.c
 * Author: SHINIMOL T S
 *
 * Created on 30 July, 2024, 12:45 PM
 */


#include <xc.h>

void main(void) {
TRISC=0XFF;
TRISD=0X00;
while(1)
{
    if(RC0==1)
    {
        PORTD=0XFF;
        for(unsigned int i=0;i<65000;i++);//delay kodthekkun//
        PORTD=0X00;
        for(unsigned int i=0;i<65000;i++);
        
    }
    else
    {
        PORTD=0X00;
    }

    if(RC1==1)
    {
        for(int j=1;j<=128;j=j*2)
        {
            PORTD=j;
            for(unsigned int i=0;i<65000;i++);
        }
    }
    else
    {
        PORTD=0X00;
    }
    if(RC2==1)
    {
        for(int k=128;k>=1;k=k/2)
        {
            PORTD=k;
            for(unsigned int i=0;i<65000;i++);
        }
    }
    else
    {
        PORTD=0X00;
    }
    }
    return;
}
    
    
       
        