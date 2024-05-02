#include<stdio.h>
main()
{
	int days,months;
	printf ("enter No.of Days:");
	scanf("%d",&days);
	
   months = days / 30 ;
   days = days % 30 ;
   printf("Months = %d Days = %d", months, days) ;
}
