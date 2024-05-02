#include <stdio.h>
main()
{
    int p,c,m,tpcm,tmp;
    printf("enter marks obtain in maths:");
    scanf("%d",&m);
    printf("\nenter marks obtain in physics:");
    scanf("%d",&p);
    printf("\nenter marks obtain in chemistry:");
    scanf("%d",&c);
    tpcm=p+c+m;
    tmp=p+m;
    
    printf("\nTotal Marks in Maths Physics & Chemistry:%d",tpcm);
    printf("\nTotal Marks in Maths & Physics:%d",tmp);
    
    if(m>=65 && p>=55 && c>=50 && tpcm>=190 && tmp>=140)
    {
        printf("\nyou are eligible");
    }
    else
    {
        printf("\nyou are not eligible");
    }
}

