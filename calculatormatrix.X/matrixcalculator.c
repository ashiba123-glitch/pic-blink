/*
 * File:   matrixcalculator.c
 * Author: SHINIMOL T S
 *
 * Created on 9 August, 2024, 9:27 AM
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
    int count=-1;
    while(1)
    {
    PORTB=0X0E;//IVIDE ORO PORTM KODKNA NTHINA NU VACHAL EH NJEKKIYALM ATHNU OR CONFUSION VARM SO ATH VARATHIRKN 4 INPUT PINSLUM 1 PIN HIGH AKKI PORT KODKUKA//
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
        cmd(0x10);//left lot shift cheyyan//
        display(" ");
        cmd(0x10);//ivde display lu space frontlotu marmbo cursor maatan vndi ith cheyyun//
        
        
        while(RB7==0);
    }
    PORTB=0X0D;//ivide ella else ifilum 1 kodthekkunnath ah 2 pin lu mathram conection vrnondanu or avde mathram led on akan vnditu//
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
    else if(RB7==0)
    {
           
        
        while(RB7==0);
    }
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
    else if(RB7==0)
    {
         
       
        while(RB6==0);
    }
     PORTB=0X07;
    if(RB4==0)
    {
        if(count==0)
        {
            cmd(0x08);//DISPLAY OFF
            while(RB4==0);
             count++;
    }
        else if(count==1)
        {
            cmd(0x0E);//DISPLAY ON
             while(RB4==0);
             count=0;
   }
}
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
    else if(RB7==0)
    {
         
       
        while(RB7==0);//ithu oru vattam print akan vndittanu kodknath ishtam olla sthalathu//
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
