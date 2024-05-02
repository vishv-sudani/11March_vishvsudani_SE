#include <stdio.h>
main()
{
    int unit;
    float total;
    
    printf("\nenter unit consumed:");
    scanf("%d",&unit);
   
   if(unit<=50)
   {
       total=(unit*0.50);
       printf("Total Bill is Rs.%.2f",total+total*0.18);
   }
   else if(unit>50 && unit<=150)
   {
       total=(50*0.50)+((unit-50)*0.75);
       printf("Total Bill is Rs.%.2f",total+total*0.18);
   }
   else if(unit>150 && unit<=250)
   {
       total=(50*0.50)+(100*0.75)+((unit-150)*1.20);
       printf("Total Bill is Rs.%.2f",total+total*0.18);
   }
   else 
   {
       total=(50*0.50)+(100*0.75)+(100*1.20)+((unit-250)*1.50);
       printf("Total Bill is Rs.%.2f",total+total*0.18);
   }
}
   

