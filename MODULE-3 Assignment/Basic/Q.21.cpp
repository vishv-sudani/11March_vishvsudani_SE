#include <stdio.h>
main()
{
    int x,y,temp;
    printf("Input value for x:");
    scanf("%d",&x);
    printf("Input value for y:");
    scanf("%d",&y);
    
    printf("Before swapping the value of x & y: %d %d",x,y);

/*Without Third Variable
    x = x + y;
    y = x - y;
    x = x - y;
    printf("\nAfter swapping the value of x & y: %d %d",x,y);*/

  //With  Third Variable
    temp=x;
    x=y;
    y=temp;
   
    printf("\nafter swapping x & y: %d %d",x,y);
}

