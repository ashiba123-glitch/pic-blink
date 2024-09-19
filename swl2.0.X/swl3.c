/*
 * File:   swl3.c
 * Author: SHINIMOL T S
 *
 * Created on 5 August, 2024, 7:59 PM
 */


#include <xc.h>
void cmd(unsigned char a );
void data(unsigned char b );
void display(const char *p);
 void delay(void);
void main(void) 
{
     TRISC=0X30;
     TRISD=0X00;
     TRISB=0X00;
    cmd(0x01);
    cmd(0x0F);//ITH DISPLAY ON AKAN OLLATH ith koduthillel display cheyyulla//
    cmd(0X82);//nadukk varan//
    cmd(0X38);//rand lineum enable cheyyan//
    cmd(0x0c);//cursor off display on//
    cmd(0X18);//shift entire display left//
    cmd(0XC1);//new line//
    cmd(0X1C);//shift entire key to right//
    int c1=-1,c2=-1;
while(1)
{
     if(RC4==1)
        {
            if(c1==2)
            {
                c1=-1;
            }
            c1++;
            while(RC4==1);
            cmd(0x01);
            cmd(0X82);
            cmd(0x38);
            cmd(0X18);
            cmd(0X1C);
     if(c1==0)
     {
         PORTB=0X01;
         display("CLOCKWISE");
         
     }
      else if(c1==1)
            {
          PORTB=0X02;
          display("ANTICLOCKWISE");
           
        
}
      else if(c1==2)
      {
          PORTB=0X03;
          display("STOP"); 
          
      }
     }
     
     {
     if(RC5==1)
        {
            if(c2==2)
            {
                c2=-1;
            }
            c2++;
            while(RC5==1);
            cmd(0x01); //0x01 koduthillel crt display akulla 0x06 okka koduthal evdem thott anoo kodukkunne aa bit thotte display aku//
            
            cmd(0X38);
            cmd(0X18);
            cmd(0XC1);
            
            if(c2==0)
     {
         PORTB=0X04;
         display("CLOCKWISE");
         
     }
      else if(c2==1)
            {
          PORTB=0X08;
          display("ANTICLOCKWISE");
           
        
}
      else if(c2==2)
      {
          PORTB=0X60;
          display("STOP"); 
         
}
     }
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
