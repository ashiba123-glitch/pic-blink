/*
 * File:   displaywithfunction.c
 * Author: SHINIMOL T S
 *
 * Created on 2 August, 2024, 10:24 AM
 */


#include <xc.h>
void cmnd (unsigned char a);
void data (unsigned char a);
void display(const char *p);

void main(void)
{
TRISC=TRISD=0X00;
cmnd(0x01);//ith data call chayunn////nerthathe prgm data mari comment function with lcdilu vekkn//
cmnd (0X0F);
display("hello");//pointer or array vachitu string define or call chynu//
while(1);//blink akkathe continues display akan vndittu// 
return;
}
void cmnd (unsigned char a)
{
RC0=0;//clear cmnd kodukkan rs=0//
RC1=0;
PORTD=a;
RC2=1;
    for(int i=0;i<100;i++);
    RC2=0;
    for(int i=0;i<5000;i++);
}
    //ivide delay koodthal kodkna display clear akan korach time vnm//
void data (unsigned char a)
{
    RC0=1;//data display chayan rs=1//
RC1=0;
PORTD=a;
RC2=1;
    for(int i=0;i<100;i++);
    RC2=0;
    for(int i=0;i<5000;i++);

}
void display(const char *p)
{
    while(*p)
    {
        data(*p);
        p++;
    }
}
