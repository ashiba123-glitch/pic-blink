/*
 * File:   driverkeypad2.c
 * Author: SHINIMOL T S
 *
 * Created on 12 August, 2024, 9:50 AM
 */


#include <xc.h>
unsigned char keypad(void);//character keypad declaration//
void cmd(unsigned char a); //function declaration
void data(unsigned char a);
void display(const char *p);

void main(void) {
    ADCON1=0X0F;//ANALOG TO DIGITAL PIN//
    TRISB=0XF0;//1111 0000//
    TRISC=0X00;//OUT PUT//
    TRISD=0X00;
    cmd(0x0f);//ITH DISPLAY OFF AKAN//
    cmd(0x01);
    cmd(0x38);//2 line enable cheyyan//
    while(1)
    {
        unsigned char a;//255 vara char value kittunnathu kondanu  varna variable ne store cheyyan//
        a=keypad();//a de value//
        data(a);//lcd de value kanikkan aytu//
        while(RB4==0 || RB5==0 || RB6==0 || RB7==0 );//code hold cheyyan//
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
void data(unsigned char a) //function definition
{
    RC0=1;
     RC1=0;
     PORTD=a; 
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
unsigned char keypad(void)
{
    while(1)//oro vattam return avunnath kond  anu ithu kodthekne//
     {
    PORTB=0X0E;
    if(RB4==0)
    {
        return '0';//string ayittu kodthekkunathu
    }
    else if(RB5==0)
    {
        return '1';
    }
    else if(RB6==0)
    {
        return '2';
    }
    else if(RB7==0)
    {
        return '3';
    }
    PORTB=0X0D;
     if(RB4==0)
    {
         return '4';
    }
    else if(RB5==0)
    {
        return '5';
    }
    else if(RB6==0)
    {
        return '6';
    }
    else if(RB7==0)
    {
        return '7';
    }
    PORTB=0X0B;
     if(RB4==0)
    {
         return '8';
    }
    else if(RB5==0)
    {
        return '9';
    }
    else if(RB6==0)
    {
        return 'A';
    }
    else if(RB7==0)
    {
        return 'B';
    }
    PORTB=0X07;
    if(RB4==0)
    {
        return 'C';
    }
    else if(RB5==0)
    {
        return 'D';
    }
    else if(RB6==0)
    {
        return 'E';
    }
    else if(RB7==0)
    {
        return 'F';
    }
    }
}