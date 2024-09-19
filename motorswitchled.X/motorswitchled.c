/*
 * File:   motorswitchled.c
 * Author: SHINIMOL T S
 *
 * Created on 5 August, 2024, 8:24 AM
 */


#include <xc.h>
void cmd(unsigned char a );
void data(unsigned char b );
void display(const char *p);
 void delay(void);
void main(void) {
     TRISC=0X10;
     TRISD=0X00;
     TRISB=0X00;
    cmd(0x01);
    cmd(0x0f);
    int count=-1;
while(1)
{
     if(RC4==1)
        {
            if(count==2)
            {
                count=-1;
            }
            count++;
            while(RC4==1);
        }
     if(count==0)
     {
         PORTB=0X01;
display("CLOCKWISE");
         
     }
      else if(count==1)
            {
          PORTB=0X02;
          display("ANTICLOCKWISE");
          
}
      else if(count==2)
      {
          PORTB=0X03;
          display("STOP");
           
         
      }
     
}
    return;
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
