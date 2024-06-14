#include<iostream>
using namespace std;

class A
{
	float r,area,circum;
	public:
	void circle()
	{
		cout<<"enter Radius:";
		cin>>r;
		
		area=3.14*r*r;
		cout<<"Area of Circle is:"<<area;
	
		circum=2*3.14*r;
		cout<<"\ncircumference of Circle is:"<<circum;
	}
};

int main()
{
	A ar;
	ar.circle();
}
