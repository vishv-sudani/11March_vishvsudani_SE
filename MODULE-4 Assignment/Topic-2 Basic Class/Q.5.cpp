#include<iostream>
using namespace std;

class A
{
	float length,width,area,peri;
	public:
	void Rectangle()
	{
		cout<<"enter length:";
		cin>>length;
		
		cout<<"enter width:";
		cin>>width;
		
		area=length*width;
		cout<<"Area of Rectangle is:"<<area;
	
		peri=2*(length+width);
		cout<<"\ncircumference of Rectangle is:"<<peri;
	}
};

int main()
{
	A ar;
	ar.Rectangle();
}
