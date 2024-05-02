#include<stdio.h>
main()
{
    float pi=3.14;
	int r;
	printf("enter radius of circle:");
	scanf("%d",&r);
	
    float area=pi*r*r;
	float circum=2*pi*r;
	printf("area of circle is %.2f",area);
	printf("\ncircumference of circle is %.2f",circum);
	
}
