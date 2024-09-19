/*
 * File:   eusart.c
 * Author: SHINIMOL T S
 *
 * Created on 14 August, 2024, 9:55 AM
 */


#include <xc.h>

void main(void) {
    TRISC=0X00;//OUT//
    TXSTA =0X24;
    RCSTA=0X90;
    BAUDCON=0X00;
     SPBRG=129;
    TXREG='A';
    while(TXIF==0);//SELF LOOP CHEYYUM//
    TXIF=0;//FLAG CLEAR CHEYYANNM//
    
    return;
}
