#include <stdio.h>
main()
{
    int a,b,c;
    printf("enter size of side A:");
    scanf("%d",&a);
    printf("enter size of side B:");
    scanf("%d",&b);
    printf("enter size of side C:");
    scanf("%d",&c);
    
    int circum=a+b+c;
    printf("circumference of triangle is:%d",circum);
}

