#include<stdio.h>
main() 
{
   int cp, sp;  
 
    printf("Enter the cost price of the product\n");  
    scanf("%d", &cp);  
  
    printf("Enter the selling price of the product\n");  
    scanf("%d", &sp);  
  
    if(sp > cp)  
    {  
        printf("Your profit is %d\n",(sp-cp));  
    }  
    else if(cp > sp)  
    {  
        printf("Your Loss is %d\n",(cp-sp));  
    }  
    else  
    {  
        printf("No profit, no loss\n");  
    }  
 }

