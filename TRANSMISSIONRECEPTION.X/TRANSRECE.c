/*
 * File:   TRANSRECE.c
 * Author: SHINIMOL T S
 *
 * Created on 21 August, 2024, 5:39 PM
 */


#include <xc.h>
void cmd(unsigned char a );
void data(unsigned char a );
void display (const char *p);
void transmission (void);
void reception (void);
void main(void)
{
    TRISC=0X80;
    TRISD=0X00;
    
    TXSTA =0X24;
    RCSTA =0X90;
    SPBRG=129;
    BAUDCON=0X00;
    
    
    cmd(0X01);
    cmd(0X0F);
    cmd(0X38);//8 BIT CONFIGURATION,two line enable
    cmd(0X06);//entry mode
    cmd(0X80);//cursor positioning,first row first block
    
    
    while(1)
    {
    reception();//VIRTUAL TERMINALIL ECHO TYPES KODUTHAL SCREENIL KANAM
    transmission ();
    }
    
} 
void transmission(void)
{
    TXREG=RCREG;//transmit registerilott character A ne load cheyyunnu
    while(TXIF==0);//flaginn wait cheyyunnu; 
    TXIF=0; 
    
}
    
void reception (void)
{

while(RCIF==0);
RCIF=0;
data(RCREG);//RCREG ALREADY OLLATH ANN SO RCREG IL OLLA DATA NE VILIKKAN
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
void data(unsigned char a)
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
