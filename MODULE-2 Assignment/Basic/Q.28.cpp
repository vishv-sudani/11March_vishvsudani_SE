#include<stdio.h>
main()
{
	int years,days,months;
	printf ("enter No.of years:");
	scanf("%d",&years);
	
   months = years * 12 ;
   days = years * 365 ;
   printf("Months = %d Days = %d", months, days) ;
}
