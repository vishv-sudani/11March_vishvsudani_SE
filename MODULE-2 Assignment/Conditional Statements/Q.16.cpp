#include<stdio.h>
main()
{
	int temp;
	printf("enter temperature in celcius:");
	scanf("%d",&temp);
	
    if(temp>=40)
    {
    	printf("Very Hot");
	}
	else if(temp<40 && temp>=30)
	{
		printf("Hot");
	}
	else if(temp<30 && temp>=20)
	{
		printf("Normal Temp.");
	}
	else if(temp<20 && temp>=10)
	{
		printf("Cold Weather");
	}
	else if(temp<10 && temp>=0)
	{
		printf("Very cold weather");
	}
	else
	{
		printf("Freezing weather");
	}
}
