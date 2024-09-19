/*
 * File:   matrixcalculator1.c
 * Author: SHINIMOL T S
 *
 * Created on 10 August, 2024, 6:21 PM
 */


#include <xc.h>
void cmd(unsigned char a );
void data(unsigned char a );
void display(const char *p);
void main(void) {
    ADCON1=0X0F;//Analog to digital pin aakkaan
    TRISB=0XF0; //1111 0000 column aan output (pulldown circuitil residtor powerilum button groundilm pull up thirich)
    TRISC=TRISD=0X00; 
    int count=0;
    cmd(0x0f);
    while(1){
    PORTB=0X0E;
    if(RB4==0)
    {
        display("7");   
        while(RB4==0);
    }
    else if(RB5==0)
    {
         display("8"); 
         while(RB5==0);
    }
    else if(RB6==0)
    {
         display("9"); 
         while(RB6==0);
    }
    else if(RB7==0)
    { 
        cmd(0x10);
       display(" ");
       cmd(0x10);
       while(RB7==0);
    }
    PORTB=0X0D;
     if(RB4==0)
    {
        display("4");
        while(RB4==0);
    }
    else if(RB5==0)
    {   
         display("5");
         while(RB5==0);
    }
    else if(RB6==0)
    {  
          display("6"); 
          while(RB6==0);
    }
   /* else if(RB7==0)
    {
          display("7");
          while(RB7==0);
    }*/
PORTB=0X0B;

     if(RB4==0)
    {
          
        display("1");
        while(RB4==0);
    }
    else if(RB5==0)
    {
         
         display("2"); 
         while(RB5==0);
    }
    else if(RB6==0)
    {
          
        display("3");
        while(RB6==0);
    }
   /* else if(RB7==0)
    {
        
        display("B");
        while(RB7==0);
    }*/
    PORTB=0X07;
    if(RB4==0)
    {
        if(count==0)
        {
            cmd(0x08);
            while(RB4==0);
             count++;
    }
        else if(count==1)
        {
            cmd(0x0e);
             while(RB4==0);
             count=0;
        }}
    else if(RB5==0)
    {
        
         display("0"); 
         while(RB5==0);
    }
    else if(RB6==0)
    {
        cmd(0x01);
         while(RB6==0);
    }
    /*else if(RB7==0)
    {
         
          display("F");
          while(RB7==0);
    }*/}
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
void data(unsigned char a )
{
    RC0=1;//data display cheyyaan display cheyyaan rc0=rs=1
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
