/*
 * File:   newmain1.c
 * Author: SHINIMOL T S
 *
 * Created on 28 July, 2024, 6:14 PM
 */


#include <xc.h>

void main(void) {
    TRISC=0X00;
    while(1)
    {
        for(int j =0X80;j>=0X01;j=j/2 )    
        {
           PORTC=j;
for(unsigned int i=0;i<60000;i++ );
        
       }
    }
    return;
}
