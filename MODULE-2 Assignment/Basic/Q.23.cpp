#include<stdio.h>
main()
{
	int a,b;
	printf("enter No.A and B:\n");
	scanf("%d%d",&a,&b);
	printf("you entered a is %d and b is %d",a,b);
	a=a*b;
	b=a/b;
	a=a/b;
	printf("\nafter swapping a is %d and b is %d",a,b);
	
}
