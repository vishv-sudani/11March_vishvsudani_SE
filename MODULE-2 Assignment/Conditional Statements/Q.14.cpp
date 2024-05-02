# include <stdio.h>
main()
{
  int a,b,c;
  printf("Enter three numbers a,b &c :");
  scanf("%d%d%d", &a, &b, &c);
  
  if(a>b && a>c)
  {
      printf("a is biggest");
  }
  else if (b>a && b>c)
  {
      printf("b is biggest");
  }
  else
  {
      printf("c is biggest");
  }
}

