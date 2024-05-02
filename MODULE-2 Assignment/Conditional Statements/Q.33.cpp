#include <stdio.h>
main()
{
    int n;
    printf("enter day number 1 to 7:");
    scanf("%d",&n);
   
   switch(n)
   {
       case 1:
       printf("the day is Sunday");
       break;
       case 2:
       printf("the day is Monday");
       break;
       case 3:
       printf("the day is Tuesday");
       break;
       case 4:
       printf("the day is Wednesday");
       break;
       case 5:
       printf("the day is Thursday");
       break;
       case 6:
       printf("the day is Friday");
       break;
       case 7:
       printf("the day is Saturday");
       break;
       default :
       printf("Error!");
   }
}

