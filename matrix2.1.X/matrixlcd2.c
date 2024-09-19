/*
 * File:   matrixlcd2.c
 * Author: SHINIMOL T S
 *
 * Created on 8 August, 2024, 1:12 PM
 */


#include <xc.h>
void cmd(unsigned char a );
void data(unsigned char a );
void display(const char *p);
void main(void)
{
    ADCON1=0X0F;//ANALOG TO DIGITAL AKKAN//
    TRISB=0XF0;//FIRST 4 PIN 1 NEXT 4 0 BECUZ first 4 O\P PIN ANN 1111 0000 ivide pull up resistor ann use cheyyunnath //
    TRISC=0X00;//output//
    TRISD=0X00;//OUTPUT//
    cmd(0x01);//CLEAR//
    cmd(0x0F);//ON//
    cmd(0X0C);//CURSOR OFF DISPLAY ON//
    
    while(1)
    {
       PORTB=0X0E;
       
       if(RB4==0)
       {
           cmd(0X01);//CLEAR CHEYYN//
           
           display("1");
          
       }
         else if(RB5==0)
       {
            cmd(0X01);
           
           display("2");
       }
           
       
       else if(RB6==0)
       {
            cmd(0X01);
            
           display("3");
       }
           
       
       else if(RB7==0)
       {
            cmd(0X01);
            
           display("4");
       }
       
       PORTB=0X0D;
       
       if(RB4==0)
       {
           cmd(0X01);
           
           display("5");
          
       }
        
        
       else if(RB5==0)
       {
            cmd(0X01);
           
           display("6");
       }
           
       
       else if(RB6==0)
       {
            cmd(0X01);
            
           display("7");
       }
           
       
       else if(RB7==0)
       {
            cmd(0X01);
            
           display("8");
       }
       
       PORTB=0X0B;
       
       if(RB4==0)
       {
           cmd(0X01);
           
           display("9");
          
       }
        
        
       else if(RB5==0)
       {
            cmd(0X01);
           
           display("A");
       }
           
       
       else if(RB6==0)
       {
            cmd(0X01);
            
           display("B");
       }
           
       
       else if(RB7==0)
       {
            cmd(0X01);
            
           display("C");
       }
       
       PORTB=0X07;
       
       if(RB4==0)
       {
           cmd(0X01);
           
           display("D");
          
       }
        
        
       else if(RB5==0)
       {
            cmd(0X01);
           
           display("E");
       }
           
       
       else if(RB6==0)
       {
            cmd(0X01);
            
           display("F");
       }
           
       
       else if(RB7==0)
       {
            cmd(0X01);
            
           display("0");
       }
       
    }
}
    void cmd(unsigned char a )
{
    RC0=0;
    RC1=0;
    PORTD=a;
    RC2=1;
    for(int i=0;i<=100;i++);
    RC2=0;
    for(int i=0;i<=5000;i++);
}
void data(unsigned char a )
{
    RC0=1;
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

        
