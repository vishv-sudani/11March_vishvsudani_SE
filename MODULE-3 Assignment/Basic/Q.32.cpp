#include <stdio.h>
main()
{
    int n1,n2,sum;
    printf("enter Number 1 & 2:");
    scanf("%d %d",&n1,&n2);
    sum=n1+n2;
    printf("sum:%d",sum);
    printf("\nsize of sum is %d",sizeof(sum));
}

