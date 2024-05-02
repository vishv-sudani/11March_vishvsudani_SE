#include <stdio.h>
main()
{
    int bs;
    printf("enter basic salary of employee:");
    scanf("%d",&bs);
   
   if(bs<=10000)
   {
      printf("Gross salary is %d",bs+(bs*20/100)+(bs*80/100));
   }
   else if(bs>10000 && bs<=20000)
   {
       printf("Gross salary is %d",bs+(bs*25/100)+(bs*90/100));
   }
   else
   {
       printf("Gross salary is %d",bs+(bs*30/100)+(bs*95/100));
   }
}

