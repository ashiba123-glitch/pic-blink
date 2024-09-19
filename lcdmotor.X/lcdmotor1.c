/*
 * File:   lcdmotor1.c
 * Author: SHINIMOL T S
 *
 * Created on 6 August, 2024, 9:47 AM
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
      
       cmd(0x01);//ith clear akan//
    cmd(0x0f);//display on akan//
    cmd(0x38);//2 line enable cheyyan means function set chayyan//
    
      int c1=-1,c2=-1;
    while(1)
    {
        if(RC0==1)
        {
            if(c1==2)
            {
                c1=-1;
            }
            c1++;
            while(RC0==1);//multiple aytu print chyathirikkn//
            cmd(0x01);//ith clear akan//
            cmd(0x38);//2 line enable cheyyan means function set chayyan//
    
         if(c1==0)
            {
            RC2=1; RC3=0;
            
            }
else if(c1==1)
            {
            RC2=0; RC3=1;
            
            }
            else  if(c1==2)
            {
                RC2=0; RC3=0;  
            }}
        if(RC1==1)
        {
            if(c2==2)
            {
                c2=-1;
            }
            c2++;
            while(RC1==1);
        
         if(c2==0)
            {
            RC4=1; RC5=0;
            
            }
else if(c2==1)
            {
            RC4=0; RC5=1;
            
            }
            else  if(c2==2)
            {
                RC4=0; RC5=0;  
            }
        }
    }
 return;
}

