#include <stdio.h>
main()
{
    int n;
    printf("enter number:");
    scanf("%d",&n);
    
    if(n>0)
    {
        printf("number is positive");
    }
    else if(n<0)
    {
        printf("number is negative");
    }
    else
    {
        printf("number is zero");
    }
}


