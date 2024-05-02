#include<stdio.h>
main()
{
	int a,b;
	printf("Enter Value of a:");
	scanf("%d",&a);
	printf("Enter Value of b:");
	scanf("%d",&b);
	
	printf("Sum is : %d",a+b);
    printf("Sub is : %d",a-b);	
    printf("Mul is : %d",a*b);
    printf("Div is : %.2f",a/b);
}
