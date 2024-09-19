/*
 * File:   7seg.c
 * Author: SHINIMOL T S
 *
 * Created on 30 August, 2024, 9:14 AM
 */


#include <xc.h>
void delay();
 unsigned char a[]={0X3F,0X06,0X5B,0X4F,0X66,0X6D,0X7D,0X07,0X7F,0X6F};//ivide ithu main porathu itta ath global variable anu or main akathu anenkl ath local variable anu//
void main(void)
{
    
    
    TRISD=0X00;
    TRISC=0X00;
    TRISB=0XFF;
    PORTD=0X00;
    PORTB=0XFF;
    ADCON1=0X0F;
    int i,j,k,l;
    
    
    while(1)
    {
        
       PORTD=0X0E; 
            PORTC= a[l];//ithu opposite orderlu kodthal mathrave rightil ninnu print aku//
            delay();
            PORTD=0X0D;
            PORTC=a[k];
delay();
            PORTD=0X0B;
            PORTC=a[j];
            delay();
            PORTD=0X07;
            PORTC=a[i];
            delay();
            if(RB0==1)
            {
            i++;
            if(i==10)//10 amathe count akmbo i=0 akm j increment akm//
            {
                i=0;
                j++;
                if(j==10)
                {
                    j=0;
                    k++;
                    if(k==10)
                    {
                        k=0;
                        l++;
                        if(l==10)
                        {
                            l=0;
                            return;    
                }
            }
                }
            }
            while(RB0==1)//repetation varathirikan print akknu//
            {
                PORTD=0x0e;
                PORTC=a[l];//ithu opposite orderlu kodthale rightil ninu print aku//
                delay();
                PORTD=0x0d;
                PORTC=a[k];
                delay();
                PORTD=0x0b;
                PORTC=a[j];
                delay();
                PORTD=0x07;
                PORTC=a[i];
                delay();

            }


           
        }
    }
    return;
    }

void delay(void)
{
    for(unsigned int i=0;i<=5000;i++);
    
}
