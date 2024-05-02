#include<stdio.h>
main()
{
	int expense,n1,n2,n3,n4,n5;
	
	printf("enter expense employee 1:");
	scanf ("%d",&n1);
	printf("enter expense of employee 2:");
	scanf ("%d",&n2);
	printf("enter expense of employee 3:");
	scanf ("%d",&n3);	
	printf("enter expense of employee 4:");
	scanf ("%d",&n4);
	printf("enter expense of employee 5:");
	scanf ("%d",&n5);
	
	float totalex=n1+n2+n3+n4+n5;
	
	printf("average of expense is:%.2f",totalex/5);
}
