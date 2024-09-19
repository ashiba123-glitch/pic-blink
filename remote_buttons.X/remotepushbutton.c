/*
 * File:   remotepushbutton.c
 * Author: SHINIMOL T S
 *
 * Created on 31 July, 2024, 9:12 AM
 */


#include <xc.h>

void main(void) {
    TRISC=0XFF;
    TRISD=0X00;
int count=0;  //ORO THAVANA PRESS CHYMBAZHUM AVDE OUTPUT VNMNKIL AVDE COUNTER VNM// 
    while(1)
    {
       if(RC0==1)//ITHU CONDITION TRUE ANONN CHECK CHYNM 0 ANEL BLUE CLR OTHERWISERED CLR//
       {
          if(count==0)//MELILTHE CONDITION TRUE ANENKILL ITHU CHECK CHEYYUM IVIDE VANN IVDE TRUE AYAL ATH ADTHA STATE LOTU POI LIGHT ON AKM//
           {               
              PORTD=0X01;
           count=1;//IVIDE COUNT 1 AKMBO ON AKANM//
       }
       else
       {
           PORTD=0X00;
count=0;//COUNT 0 AKMBO OFF AKANM//
       }
       while(RC0==1);//ITH DELAY KKU PAKARAM ANU KODKNE KARANM NMK IVDE OR FIXED DELAY KODKN OKKLA//
    }
}
                  
        
    
    return;
}
