
  
  #include <xc.h>
  void main(void)
  { 
      TRISC=0XFF;//input
      TRISD=0X00;//output
      int count=-1;/*-1 KODTHAL ATH PROPER AYTU INCREMENT CHYTH POKUM 0 KODKBANEL 3 STATELOTTU ATH INCREMENT CHYILLA ATHNU PAKARAM -1 KODTHALL O ILOTU MARM*/
    while(1)
    {
        if(RC0==1)
        {
            if(count==2)//IVIDE 2 KODTHEKKUNNATHU INCREMENT AVUNN
            {
                count=-1;
            }
            count++;//increment
            while(RC0==1);
        }
         if(count==0)//ITHU SATISFY CHYTHAL LED ON AKM
            {
            PORTD=0X01;
            }
            else if(count==1)//ITHU SATISFY CHYTHAL ITHU OFF AKM
            {
            PORTD=0X02;
            }
            else  if(count==2)//ITH SATISFY AYAL LED BLINK CHEYYUM
            {    
             PORTD=0X00;               
             }
    }
      return;
      }
      
  
          