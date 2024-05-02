#include<stdio.h>
main()
{
    char name[10],add[20];int age,bd;
	printf("Enter Your Name :");
	scanf("%s",&name);
	printf("Enter Your Birth Date :");
	scanf("%d",&bd);
	printf("Enter Your Age :");
	scanf("%d",&age);
	printf("Enter Your Address :");
	scanf("%s",&add);	
	
	printf("\nYour Name is %s",name);
	printf("\nYour birth date is %d",bd);
	printf("\nYour Age is %d",age);
	printf("\nYour Add is %s",add);
}
