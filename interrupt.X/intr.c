/*
 * File:   intr.c
 * Author: SHINIMOL T S
 *
 * Created on 21 August, 2024, 6:50 PM
 */


#include <xc.h>
void delay (void);//ivide delay declear chythal elladavm delay kodknda avshym lla function vndaduthu delay call chyth poyal mathi//

void main(void) {
    TRISC=TRISD=0X00;
    TRISB=0X01;
    ADCON1=0X0F;//analog pin set akan//
    INTCON=0XD0;//interrupt ayathkond kodthu//
while(1)
{
    PORTC=0X0FF;//normal blinking process//
    delay();
       
    PORTC=0X00;
    delay();
    }

return;
}

     void __interrupt() ISR ()//interrupt definition ivide ithinte decleration vnda//
    {
         int i;
         if (INT0IF==1)
         {
             PORTD=0X01;
             delay();
             
         for(int i=0;i<=7;i++)//ith shift chayanollathu//
         {
             PORTD<<=1;//shift//
            delay(); 
         }
              INT0IF=0;//flag clear//
         }
         
     }
     void delay(void)
     {
         for(int i=0;i<300;i++)
         {
           for(int j=0;j<300;j++);  
        }
     }
         
         
         
         
             
    
        
 
     
       
        
        

    

