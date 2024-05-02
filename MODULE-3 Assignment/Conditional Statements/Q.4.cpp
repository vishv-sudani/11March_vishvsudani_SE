#include<stdio.h>
main()
{
	char c;
	int a,b;
	printf("enter choice + - * / % :");
	scanf("%c",&c);
	printf("enter number a&b:");
	scanf("%d %d",&a,&b);
	
	
	switch(c)
	{
		case '+':
		printf("sum:%d",a+b);
		break;
		case '-':
		printf("sub:%d",a-b);
		break;
		case '*':
		printf("Mul:%d",a*b);
		break;
		case '/':
		printf("Div:%d",a/b);
		break;
		case '%':
		printf("Modulo:%d",a%b);
		break;
		default:
		printf("error"); 					
	}
}
