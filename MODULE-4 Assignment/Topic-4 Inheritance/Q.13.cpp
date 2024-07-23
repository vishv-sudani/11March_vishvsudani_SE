#include<iostream>
using namespace std;

class Larg
{
   int x,y;
	public:

   void input() 
   {
       cout<<"Enter number : ";
       cin>>x;
       cout<<"Enter number : ";
       cin>>y;
	}
   friend void find(Larg a);
};

void find(Larg a)
{
   if(a.x > a.y)
   {
       cout<<"Largest is : "<<a.x;
   }
   else
   {
       cout<<"Largest is : "<<a.y;
   }
}

main()
{
   Larg L;
   L.input();
   find(L);
}

