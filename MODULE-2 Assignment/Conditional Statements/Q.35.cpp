#include <stdio.h>  
main()
{
   int mno;
   char mnm[15];

   printf("Input Month No : ");  
   scanf("%d",&mno);

   switch(mno)
   {
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
	       printf("Month have 31 days. \n");  
	       break;
	case 2:
	       printf("The 2nd month is a February and have 28 days. \n");  
	       printf("in leap year The February month  Have 29 days.\n");  
	       break;
	case 4:
	case 6:
	case 9:
	case 11:
	       printf("Month have 30 days. \n");  
	       break;
	default:
	       printf("Invalid Month number.\nPlease try again ....\n"); 
	       break;
      }
}

