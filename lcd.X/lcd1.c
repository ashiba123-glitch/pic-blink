/*
 * File:   lcd1.c
 * Author: SHINIMOL T S
 *
 * Created on 2 August, 2024, 9:40 AM
 */


#include <xc.h>

void main(void) {
    TRISC=TRISD=0X00;//INPUT AND OUTPUT DIRECTION SET CHYTHEKKNU OR TRISD =0XFF ITT KODTHALM MATHI//
    RC0=0;//RS//
    RC1=0;//RW//
    PORTD=0X01;
    RC2=1;//ITH DELAY ENABLE CHAYYANM////DIFFERENT AYTU ENNALE CLEAR AKU LCD//
    for(int i=0;i<100;i++);
    RC2=0;
    for(int i=0;i<100;i++);
    RC0=0;
    RC1=0;    
    PORTD=0X0F;
    RC2=1;
    for(int i=0;i<100;i++);
    RC2=0;
    for(int i=0;i<100;i++);
    
    
    return;
}
