#include<iostream>
using namespace std;

class sum
{
	public:
	sum(int a,int b)
	{
		cout<<"\nsum:"<<a+b;
	}
};
class sub
{
	public:
	sub(int a,int b)
	{
		cout<<"\nsub:"<<a-b;
	}
};

class mul
{
	public:	
	mul(int a,int b)
	{
		cout<<"\nMul:"<<a*b;
	}
};

class div
{
	public:	
	div(float a,float b)
	{
		cout<<"\nDiv:"<<a/b;
	}
};

main()
{
	int a,b;
	cout<<"enter a:";
	cin>>a;
	cout<<"enter b:";
	cin>>b;
	sum s(a,b);
	div d(a,b);
	mul m(a,b);
	sub su(a,b);
}
