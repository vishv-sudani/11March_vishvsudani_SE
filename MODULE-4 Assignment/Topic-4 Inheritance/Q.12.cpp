#include <iostream>
using namespace std;

class abc
{
	public:
    int a,b;
    void xyz()
	{
        cout<<"Enter first no. : ";
        cin>>a;

        cout<<"Enter second no. : ";
        cin>>b;
    }

    void ijk()
	{
        cout<<"Before swap a = "<<a<<" b = "<<b;
        a = a*b;
		b = a/b;
		a = a/b;
        cout<<"\nAfter swap a = "<<a<<" b = "<<b;
    }
};

main()
{
    abc ab;
    ab.xyz();
    ab.ijk();
}


