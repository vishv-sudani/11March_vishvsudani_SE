#include<stdio.h>
main()
{
    int w,l;
	printf("enter width of Rectangle:");
	scanf("%d",&w);
    printf("enter length of Rectangle:");
	scanf("%d",&l);	
    int circum=w+w+l+l;
	
	printf("Circumference of Rectangle is %d",circum);
	
}
