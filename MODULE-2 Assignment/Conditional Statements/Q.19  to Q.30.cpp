#include <stdio.h>
main()
{
    int id,unit;
    float total;
    char name[5];
    printf("enter customer id:");
    scanf("%d",&id);
    printf("\nenter customer name:");
    scanf("%s",&name);
    printf("\nenter unit consumed:");
    scanf("%d",&unit);
       
   if(unit<350)
   {
       total=unit*1.20;
   }
   else if(unit>=350 && unit<600)
   {
       total=unit*1.50;
   }
   else if(unit>=600 && unit<800)
   {
       total=unit*1.80;
   }
   else 
   {
       total=unit*2.00;
   }

    if(total>800)
    {
      printf("Total Bill is Rs.%.2f",total+(total*18/100));
    }
   else if (total<=256)
   {
   	printf("Total Bill is Rs.256");
   }
   else
   {
   	 printf("Total Bill is Rs.%.2f",total);
	} 
}

