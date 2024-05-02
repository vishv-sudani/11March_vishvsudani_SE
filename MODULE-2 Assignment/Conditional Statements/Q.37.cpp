#include <stdio.h>
main()
{
    char n;
    printf("enter character:");
    scanf("%c",&n);
    
   
   switch(n)
   {
    case 'a': 
    case 'e': 
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
    printf("character is vovel");
    break;
       
    default:
    printf("character is Consonant");
   }
}

