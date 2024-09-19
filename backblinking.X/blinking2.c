/*
 * File:   blinking2.c
 * Author: SHINIMOL T S
 *
 * Created on 28 July, 2024, 5:50 PM
 */


#include <xc.h>

void main(void) {
    TRISC=0X00;
    while(1)
    {
        for( PORTC=0X80;PORTC>0X01;PORTC++ )    
        {
for(unsigned int i=0;i<60000;i++ );
        
       }
    }
    return;
}
