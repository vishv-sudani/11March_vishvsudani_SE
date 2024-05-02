#include<stdio.h>
main()
{
	int minutes,seconds,hours;
	printf ("enter No.of minutes:");
	scanf("%d",&minutes);
	
   hours = minutes/60 ;
   minutes = minutes % 60 ;
   seconds = minutes*60;
   printf("hours = %d  seconds = %d",hours,seconds) ;
}
