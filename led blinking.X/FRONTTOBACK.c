/*
 * File:   FRONTTOBACK.c
 * Author: SHINIMOL T S
 *
 * Created on 29 July, 2024, 9:27 AM
 */


#include <xc.h>

void main(void) {
    TRISC=0X00;
    while(1)
    {
        for(int j=0x01;j<=0x80;j=j*2)
        {
            PORTC=j;
        for(unsigned int i=0;i<60000;i++ );
        }
    }
    return;
}
