/*
 * File:   PORTCANDDBACK.c
 * Author: SHINIMOL T S
 *
 * Created on 29 July, 2024, 10:28 AM
 */


#include <xc.h>

void main(void) {
    TRISC=0X00;
    TRISD=0X00;
    
    while(1)
    {
        for(int j =0X80;j>=0X01;j=j/2 )    
        {
           PORTC=j;
for(unsigned int i=0;i<60000;i++ );
        
       }
        PORTC=0X00;//EE PORT THEERNU ADTHA PORT LIGHT ON AKAN VNDI ANU ITHU KODKNE//
   
    
     for(int j=0x80;j>=0x01;j=j/2)
        {
            PORTD=j;
            for(unsigned int i=0;i<60000;i++);
        }
        PORTD=0X00;
    }
    return;
}
