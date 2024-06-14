#include<iostream>
using namespace std;

class car
{
	string company,model;
	int year;
	
	public:
	
	void inputdata()
	{
			
	cout<<"enter Car manufacture Company:";
	cin>>company;
	
	cout<<"enter Car model:";
	cin>>model;
	
	cout<<"enter Car manufacture year:";
	cin>>year;;
    }	
	void printdata()
	{	
	cout<<"\nCar Manufacture Company:"<<company;
	cout<<"\nCar Model:"<<model;
	cout<<"\nCar Manufacture Year:"<<year;
    }
};

main()
{
	car c;
	c.inputdata();
	c.printdata();
}
