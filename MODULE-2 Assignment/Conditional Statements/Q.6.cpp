#include <stdio.h>
main()
{
    char c;
    printf("enter character:");
    scanf("%c",&c);
    
    
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
    {
        printf("character is vovel");
    }
    else
    {
        printf("character is not vovel");
    }
}

