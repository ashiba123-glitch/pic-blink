/*
 * File:   adcv.c
 * Author: SHINIMOL T S
 *
 * Created on 4 September, 2024, 9:57 AM
 */


#include <xc.h>
#include<stdio.h>//sprintf kodukkunnond
#define output_start 0
#define output_end 150ul//pakshe out nmk ethra value kodthalm 0 to 150 vara kittu//
#define input_end 308ul//ivide namak ip value sensor nu 0 to 308 vare kodkn okm//
#define input_start 0
unsigned char ar[10]={0X3F,0X06,0X5B,0X4F,0X66,0X6D,0X7D,0X07,0X7F,0X6F};
void main(void) {
    TRISC=TRISD=0X00;
    TRISA=0XFF;
     ADCON0=0X01;
   ADCON1=0X00;
   ADCON2=0X86;
    while(1)
    {
        int adc;
        int a;
        GO=1;
        while (ADIF==0);
         ADIF=0;
        adc=ADRES;//adc ne store chayan vndi use akknu//
         a = output_start + ((float)(output_end - output_start) / (input_end - input_start)) * (adc - input_start);//mapping eqn for temp sensor//
        

        int rem1,rem2,rem3;
        rem1=a%10;//ithu oru number lastinu divide cheythu athnte quotient edkn modulo use akknu//
        a=a/10;//ithu cheyynathu kittiyekkna quotient nte decimal point mattan vndittanu//
        rem2=a%10;
        a=a/10;
       rem3=a%10;
      a=a/10;
      
                       
                PORTD=0x0d;
               PORTC=ar[rem3];
               for(unsigned int i=0;i<=1000;i++);
                PORTD=0x0b;
                PORTC=ar[rem2];
                for(unsigned int i=0;i<=1000;i++);
                PORTD=0x07;
                PORTC=ar[rem1];
               for(unsigned int i=0;i<=1000;i++);
   }
return;
}
