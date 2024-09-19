/*
 * File:   eusart3.0
 * Author: SHINIMOL T S
 *
 * Created on 20 August, 2024, 9:12 AM
 */


#include <xc.h>
void transmission(char a);

void main(void)
{
    char a[6]="ashiba";
    TRISC=0X00;//OUT//
    TXSTA =0X24;
    RCSTA=0X90;
    BAUDCON=0X00;
    SPBRG=129;
     
     for(int i=0;i<=5;i++)
     {
          transmission(a[i]);
     }
    while(1);
    
     
  
}
void transmission(char a)
{
    TXREG= a;
    while ( TXIF==0);//SELF LOOP CHEYYUM////transmittance wait cheyunnu//
    TXIF=0 ;//FLAG CLEAR CHEYYANNM//
}

