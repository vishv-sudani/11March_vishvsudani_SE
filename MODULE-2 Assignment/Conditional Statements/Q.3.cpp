#include <stdio.h>
main()
{
    int year;
    printf("enter year:");
    scanf("%d",&year);
    
    float yr=year%4;
    
    if(yr==0)
    {
        printf("year is leap year");
    }
    else
    {
        printf("year is not leap year");
    }
}

