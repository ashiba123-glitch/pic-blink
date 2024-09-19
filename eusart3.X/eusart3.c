/*
 * File:   eusart3.c
 * Author: SHINIMOL T S
 *
 * Created on 20 August, 2024, 8:55 AM
 */


#include <xc.h>
void transmission(char a);

void main(void)
{
    TRISC=0X00;//OUT//
    TXSTA =0X24;
    RCSTA=0X90;
    BAUDCON=0X00;
    SPBRG=129;
     transmission('a');
  
}
void transmission(char a)
{
    
    TXREG= a;
    while( TXIF==0);//SELF LOOP CHEYYUM////transmittance wait cheyunnu//
    TXIF=0 ;//FLAG CLEAR CHEYYANNM//
    
}

