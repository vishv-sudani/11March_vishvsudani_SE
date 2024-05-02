#include <stdio.h>
main()
{
    int w,h,l;
    printf("enter width:");
    scanf("%d",&w);
    printf("enter height:");
    scanf("%d",&h);
    printf("enter length:");
    scanf("%d",&l);
    
    int area=2*((w*l)+(h*l)+(h*w));
    printf("area of prizm is:%d",area);
}

