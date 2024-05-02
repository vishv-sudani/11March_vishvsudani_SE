# include <stdio.h>
main()
{
  int a, b, c,total;
    printf("Enter three angles of triangle : ");
    scanf("%d%d%d", &a, &b, &c);
  
  total=a+b+c;
  if(total==180)
  {
      printf("triangle can be formed");
  }
  else
  {
      printf("triangle cannot be formed");
  }
}

