/*
 * File:   EUSART2.c
 * Author: SHINIMOL T S
 *
 * Created on 14 August, 2024, 10:15 AM
 */


#include <xc.h>
void transmission(void);

void main(void)
{
    TRISC=0X00;//OUT//
    TXSTA =0X24;
    RCSTA=0X90;
    BAUDCON=0X00;
    SPBRG=129;
    transmission();

    
 
}
void transmission(void)
{
    TXREG='A';
    while(TXIF==0);//SELF LOOP CHEYYUM////transmittance wait cheyunnu//
    TXIF=0;//FLAG CLEAR CHEYYANNM//
}

