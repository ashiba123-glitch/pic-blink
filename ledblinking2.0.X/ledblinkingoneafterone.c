/*
 * File:   ledblinkingoneafterone.c
 * Author: SHINIMOL T S
 *
 * Created on 29 July, 2024, 7:33 PM
 */



#include <xc.h>

void main(void) {
    TRISC=0X00;
    TRISD=0X00;
    
    
    while(1)
    {
           
    
     
            PORTC=0X01;
            for(unsigned int i=0;i<=65000;i++);
        PORTC=0X00;//IVIDE FIRST LED BLINKING STOP AKAN VNDI ANU KODKNATHU//
        for(unsigned int i=0;i<=65000;i++);//ITHU LED KATHI ANAYAN VNDITTANU KODKNNATHU//
        PORTC=0X03;
        for(unsigned int i=0;i<=65000;i++);
        PORTC=0X00;
        for(unsigned int i=0;i<=65000;i++);
        PORTC=0X07;
        for(unsigned int i=0;i<=65000;i++);
        PORTC=0X00;
        for(unsigned int i=0;i<=65000;i++);
        PORTC=0X0F;
        for(unsigned int i=0;i<=65000;i++);
        PORTC=0X00;
        for(unsigned int i=0;i<=65000;i++);
        PORTC=0X1F;
        for(unsigned int i=0;i<=65000;i++);
        PORTC=0X00;
        for(unsigned int i=0;i<=65000;i++);
        PORTC=0X3F;
        for(unsigned int i=0;i<=65000;i++);
        PORTC=0X00;
        for(unsigned int i=0;i<=65000;i++);
        PORTC=0X7F;
        for(unsigned int i=0;i<=65000;i++);
        PORTC=0X00;
        for(unsigned int i=0;i<=65000;i++);
        PORTC=0XFF;
        for(unsigned int i=0;i<=65000;i++);
        PORTC=0X00;
        for(unsigned int i=0;i<=65000;i++);
         PORTD=0X01;
            for(unsigned int i=0;i<=65000;i++);
        PORTD=0X00;
        for(unsigned int i=0;i<=65000;i++);
        PORTD=0X03;
        for(unsigned int i=0;i<=65000;i++);
        PORTD=0X00;
        for(unsigned int i=0;i<=65000;i++);
        PORTD=0X07;
        for(unsigned int i=0;i<=65000;i++);
        PORTD=0X00;
        for(unsigned int i=0;i<=65000;i++);
        PORTD=0X0F;
        for(unsigned int i=0;i<=65000;i++);
        PORTD=0X00;
        for(unsigned int i=0;i<=65000;i++);
        PORTD=0X1F;
        for(unsigned int i=0;i<=65000;i++);
        PORTD=0X00;
        for(unsigned int i=0;i<=65000;i++);
        PORTD=0X3F;
        for(unsigned int i=0;i<=65000;i++);
        PORTD=0X00;
        for(unsigned int i=0;i<=65000;i++);
        PORTD=0X7F;
        for(unsigned int i=0;i<=65000;i++);
        PORTD=0X00;
        for(unsigned int i=0;i<=65000;i++);
        PORTD=0XFF;
        for(unsigned int i=0;i<=65000;i++);
        PORTD=0X00;
        for(unsigned int i=0;i<=65000;i++);
        
        
        
    }
    return;
}   