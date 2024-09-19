/*
 * File:   reception2.c
 * Author: SHINIMOL T S
 *
 * Created on 21 August, 2024, 9:07 AM
 */


#include <xc.h>
    void cmd(unsigned char a );
void data(unsigned char b );
void display(const char *p);
void reception(void);
void main(void) {
    TRISD=0X00;
    TRISC=0X80;
    TXSTA=0X24;
    RCSTA=0X90;
    SPBRG=129;
    
    cmd(0x01);
    cmd(0x0f);
    cmd(0x38);//8 bit configuration 2 line enable cheyyan//
    cmd(0x06);//entry mode//
    cmd(0x80);//cursor position cheyyan//
    while(1)
    {
    reception();//type chyunna oroninem print akan loopil kodkununu //
    }
    
}
    void reception(void)
    {
   
    while(RCIF==0);
    RCIF=0;
    data(RCREG);//direct ayit kodknu//
    }
    
    
    void cmd(unsigned char a )
{
    RC0=0;//clear command kodukkan rs=0
    RC1=0;
    PORTD=a;
    RC2=1;
    for(int i=0;i<=100;i++);
    RC2=0;
    for(int i=0;i<=5000;i++);
}
void data(unsigned char b )
{
    RC0=1;//data display cheyyaan display cheyyaan rc0=rs=1
    RC1=0;
    PORTD=b;
    RC2=1;
    for(int i=0;i<=100;i++);
    RC2=0;
    for(int i=0;i<=5000;i++);
}

void display(const char *p)
{
    while(*p)
    {
        data(*p);
  p++;
}
}
