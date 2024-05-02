#include<stdio.h>
main()
{
	int years,days;
	printf("enter No.of Days:");
	scanf("%d",&days);
	
	years=days/365;
	days=days%365;
	printf("Years : %d days=%d",years,days);
	
	printf ("\nenter No.of years:");
	scanf("%d",&years);
	
   days = years * 365 ;
   printf("Days = %d",days) ;
}
