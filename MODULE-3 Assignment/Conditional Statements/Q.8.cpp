#include <stdio.h>
main()
{
    int height;
    printf("enter height(cm):");
    scanf("%d",&height);
    
    if(height>=165)
    {
        printf("person is tall");
    }
    else if(height>=150 && height<165)
    {
        printf("person is average");
    }
    else
    {
        printf("person is short");
    }
}

