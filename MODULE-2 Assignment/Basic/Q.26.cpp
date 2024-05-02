#include<stdio.h>
main()
{
	int f;
	printf("enter temprature in Ferenhit:");
	scanf ("%d",&f);
    
    int c=(f-32)*5/9;
    
    printf("temperature is %d degree celcius",c);
}
