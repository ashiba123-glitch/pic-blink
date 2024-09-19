/*
 * File:   eusartreception.c
 * Author: SHINIMOL T S
 *
 * Created on 20 August, 2024, 10:11 AM
 */


#include <xc.h>
void cmd(unsigned char a); //function declaration
void data(unsigned char b);
void display(const char *p);
void main(void)
{
    ADCON1=0X0F;
    TRISB=0X03;
    TRISC=0X00;
    TRISC=0X80;
    TXSTA =0X24;
    RCSTA=0X90;
    BAUDCON=0X00;
    SPBRG=129;
    char w;
    cmd(0x01);
    cmd(0x0f);
    cmd(0x80);
    cmd(0x06);//entry mode//
    while(1)
    {
    while(RCIF==0);//1 ayal prgm exit akm or false anankil condition (0) ayi SELF LOOP CHEYYUM//
    w=RCREG;//A DE VALUE RCREG LOTU KODKUNN//
    data(w);
    }
    return;
}
    void cmd(unsigned char a)//function definition
{
     RC0=RC1=0;
    PORTD=a; 
    RC2=1;
    for(int i=0;i<=100;i++);
    RC2=0;
     for(int i=0;i<=10000;i++);
}
void data(unsigned char b) //function definition
{
    RC0=1;
     RC1=0;
     PORTD=b; 
    RC2=1;
    for(int i=0;i<=100;i++);
    RC2=0; 
    for(int i=0;i<=10000;i++);
}
void display(const char *p)
{
    while(*p)
    {
        data(*p);
        p++;
    }    
}
