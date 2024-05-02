#include <stdio.h>
main()
{
    char name[20];
    printf("Enter Country name :");
    scanf("%s",&name);
    
    printf("Abbriviated Country Name is: %c%c%c",name[0],name[1],name[2]);
}

