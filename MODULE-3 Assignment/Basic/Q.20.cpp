#include <stdio.h>
main()
{
    int salary,premium,loan;
    printf("enter monthly salary:");
    scanf("%d",&salary);
    premium=salary/10;
    printf("your monthly insurance premium:%d",premium);
    loan=salary/10;
    printf("\nyour monthly loan Installment:%d",loan);
    

    int Pay=salary-premium-loan;
    printf("\nyour Net salary is:%d",Pay);
    
}

