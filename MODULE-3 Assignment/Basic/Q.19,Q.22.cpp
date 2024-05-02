#include <stdio.h>
#include<math.h>
int main()
{
    double p,r;
    int n,t;
    printf("enter principle amount:");
    scanf("%lf",&p);
    printf("enter rate of interest:");
    scanf("%lf",&r);
    printf("enter time in years:");
    scanf("%d",&t);
    printf("enter number of times that interest is compounded annually: ");
    scanf("%d",&n);
    float rate=r/100;
    
    double A=p*pow((1+rate/n),n*t);
    printf ("Compound Interest is %.2lf",A-p); 
}

