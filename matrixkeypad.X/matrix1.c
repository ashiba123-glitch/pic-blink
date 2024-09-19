/*
 * File:   matrix1.c
 * Author: SHINIMOL T S
 *
 * Created on 8 August, 2024, 9:48 AM
 */


#include <xc.h>

void main(void)
{
    ADCON1=0X0F;//ANALOG TO DIGITAL PIN//
    TRISB=0XF0;//1111 0000//
    TRISC=0X00;//OUT PUT//
    while(1)
    {
    PORTB=0X0E;//IVIDE ORO PORTM KODKNA NTHINA NU VACHAL EH NJEKKIYALM ATHNU OR CONFUSION VARM SO ATH VARATHIRKN 4 INPUT PINSLUM 1 PIN HIGH AKKI PORT KODKUKA//
    if(RB4==0)
    {
        RC0=1;
    }
    else if(RB5==0)
    {
        RC1=1;
    }
    else if(RB6==0)
    {
        RC2=1;
    }
    else if(RB7==0)
    {
        RC3=1;
    }
    PORTB=0X0D;//ivide ella else ifilum 1 kodthekkunnath ah 2 pin lu mathram conection vrnondanu or avde mathram led on akan vnditu//
    if(RB4==0)
    {
        RC0=1;
    }
    else if(RB5==0)
    {
        RC1=1;
    }
    else if(RB6==0)
    {
        RC2=1;
    }
    else if(RB7==0)
    {
        RC3=1;
    }
    PORTB=0X0B;
    if(RB4==0)
    {
        RC0=0;
    }
    else if(RB5==0)
    {
        RC1=0;
    }
    else if(RB6==0)
    {
        RC2=0;
    }
    else if(RB7==0)
    {
        RC3=0;
    }
     PORTB=0X07;
    if(RB4==0)
    {
        RC0=0;
    }
    else if(RB5==0)
    {
        RC1=0;
    }
    else if(RB6==0)
    {
        RC2=0;
    }
    else if(RB7==0)
    {
        RC3=0;
    }
    }
    
    return;
}
