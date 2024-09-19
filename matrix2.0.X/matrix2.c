/*
 * File:   matrix2.c
 * Author: SHINIMOL T S
 *
 * Created on 8 August, 2024, 11:48 AM
 */


#include <xc.h>
void cmd(unsigned char a );
void data(unsigned char b );
void display(const char *p);

void main(void)
{
    ADCON1=0X0F;//ANALOG TO DIGITAL PIN//
    TRISB=0XF0;//1111 0000//
    TRISC=0X00;//OUT PUT//
    TRISD=0X00;
    cmd(0x0f);//ITH DISPLAY OFF AKAN//
    while(1)
    {
    PORTB=0X0E;//IVIDE ORO PORTM KODKNA NTHINA NU VACHAL EH NJEKKIYALM ATHNU OR CONFUSION VARM SO ATH VARATHIRKN 4 INPUT PINSLUM 1 PIN HIGH AKKI PORT KODKUKA//
    if(RB4==0)
    {
   cmd(0x01);
    display("1");
    }
    else if(RB5==0)
    { 
  cmd(0x01);
  display("2");
    }
    else if(RB6==0)
    {
     cmd(0x01);
     display("3");
        
    }
    else if(RB7==0)
    {
        cmd(0x01);
        display("4");
    }
    PORTB=0X0D;//ivide ella else ifilum 1 kodthekkunnath ah 2 pin lu mathram conection vrnondanu or avde mathram led on akan vnditu//
    if(RB4==0)
    {
           cmd(0x01);
        display("5");
    }
    else if(RB5==0)
    {
 cmd(0x01);
        display("6");
    }
    else if(RB6==0)
    {
           cmd(0x01);
        display("7");
    }
    else if(RB7==0)
    {
           cmd(0x01);
        display("8");
    }
    PORTB=0X0B;
    if(RB4==0)
    {
        cmd(0x01);
        display("9");
    }
    else if(RB5==0)
    { 
        cmd(0x01);
        display("a"); 
    }
    else if(RB6==0)
    {
         cmd(0x01);
        display("b"); 
    }
    else if(RB7==0)
    {
         cmd(0x01);
        display("c");
    }
     PORTB=0X07;
    if(RB4==0)
    {
         cmd(0x01);
        display("d");
    }
    else if(RB5==0)
    {
         cmd(0x01);
        display("e");
    }
    else if(RB6==0)
    {
         cmd(0x01);
        display("f");    
    }
    else if(RB7==0)
    {
         cmd(0x01);
        display("0");   
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