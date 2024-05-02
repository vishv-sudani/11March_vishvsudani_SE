#include <stdio.h>
main()
{
    int n;
    printf("enter Month number 1 to 12:");
    scanf("%d",&n);
   
   switch(n)
   {
       case 1:
       printf("the Month is January");
       break;
       case 2:
       printf("the Month is February");
       break;
       case 3:
       printf("the Month is March");
       break;
       case 4:
       printf("the Month is April");
       break;
       case 5:
       printf("the Month is May");
       break;
       case 6:
       printf("the Month is June");
       break;
       case 7:
       printf("the Month is July");
       break;
       case 8:
       printf("the Month is August");
       break;
       case 9:
       printf("the Month is September");
       break;
       case 10:
       printf("the Month is October");
       break;
       case 11:
       printf("the Month is November");
       break;
       case 12:
       printf("the Month is December");
       break;
       default :
       printf("Error!");
   }
}

