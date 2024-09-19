/*
 * File:   2motorlcdwith2count.c
 * Author: SHINIMOL T S
 *
 * Created on 12 August, 2024, 8:19 PM
 */


#include <xc.h>
void cmd(unsigned char a );
void data(unsigned char b );
void display(const char *p);
void main(void) 
{
       TRISC=0X03;
     TRISD=0X00;
     TRISB=0X00;
      cmd(0x01);
    cmd(0x0f);
    cmd(0x38);
    
      int c1=-1,c2=-1;
    while(1){
        cmd(0x0C);
        if(RC0==1)
        {
            if(c1==2)
            {
                c1=-1;
            }
            c1++;
             while(RC0==1);
               cmd(0x80);
         if(c1==0)
            {
            RC2=1; RC3=0;
             display("MOTOR1CLOCKWISE ");
            }
else if(c1==1)
            {
            RC2=0; RC3=1;
             display("MOTOR1ANTICLOCK");
            }
            else  if(c1==2)
            {
                RC2=0; RC3=0; 
             display("MOTOR1STOP      ");
            }}
        if(RC1==1)
        {
            if(c2==2)
            {
                c2=-1;
            }
            c2++;
            while(RC1==1);
           cmd(0xC0);
         if(c2==0)
            {
            RC4=1; RC5=0;
             display("MOTOR2CLOCKWISE ");
            }
else if(c2==1)
            {
            RC4=0; RC5=1;
             display("MOTOR2ANTICLOCK");
            }
            else  if(c2==2)
            {
                RC4=0; RC5=0; 
                 display("MOTOR2STOP      ");
            }
        }}
      return;
  } 
  void cmd(unsigned char a )
{
    RB3=0;
    RB4=0;
    PORTD=a;
    RB5=1;
    for(int i=0;i<=100;i++);
    RB5=0;
    for(int i=0;i<=5000;i++);
}
void data(unsigned char b )
{
    RB3=1;
    RB4=0;
    PORTD=b;
    RB5=1;
    for(int i=0;i<=100;i++);
    RB5=0;
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
