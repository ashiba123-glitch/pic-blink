/*
 * File:   scrollinglcd.c
 * Author: SHINIMOL T S
 *
 * Created on 6 August, 2024, 7:43 PM
 */


#include <xc.h>
void cmd(unsigned char a );
void data(unsigned char b );
void display(const char *p);

void main(void)
{
TRISC=0X00;
TRISD=0X00;
cmd(0x0f);//ITH DISPLAY OFF AKAN//

cmd(0x0c);//cursor off akan//
display("ashiba  ");
cmd(0x18);//left shift//

return;

}
void cmd(unsigned char a )
{
    RC0=0;
    RC1=0;//data enable cheyyan vnditu 2m 0 kodkunn//
    PORTD=a;
    RC2=1;
    for(int i=0;i<=100;i++);
    RC2=0;
    for(int i=0;i<=5000;i++);
}
void data(unsigned char a )
{
   
    RC0=1;//rs=0//
    RC1=0;
    PORTD=a;
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
