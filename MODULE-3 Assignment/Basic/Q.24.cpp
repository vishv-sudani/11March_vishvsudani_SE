#include <stdio.h>
main()
{
    char n1[10],n2[10],n3[10],n4[10],n5[10];
    int s1,s2,s3,s4,s5,total;
    float average;
    printf("enter 5 employee name: ");
    scanf("%s %s %s %s %s",&n1,&n2,&n3,&n4,&n5);
    printf("enter 5 employee salary:");
    scanf("%d %d %d %d %d",&s1,&s2,&s3,&s4,&s5);
    total=s1+s2+s3+s4+s5;
    average=total/5;
    printf("\ntotal salary of 5 emploee is: %d",total);
    printf("\naverage salary if 5 employee is: %.2f",average);
}

