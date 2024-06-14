#include<iostream>
using namespace std;
class students
{
	public:
	int rn;
	void basic()
	{
		cout<<"Enter roll number : ";
		cin>>rn;
	}
};

class test:public students
{
	public:
	int m1,m2;
	void sub()
	{
		cout<<"Enter Subject 1 Marks : ";
		cin>>m1;
			
		cout<<"Enter Subject 2 Marks: ";
		cin>>m2;
	}
};

class result:public test
{
	public:
		int total;
		void sum()
		{
			total = m1 + m2;
		}
		void printdata()
		{
			cout<<"\nRoll no. : "<<rn;
			cout<<"\n Sub 1 Marks : "<<m1;
			cout<<"\n Sub 2 Marks : "<<m2;			
			cout<<"\nTotal : "<<total;
		}
	
};
main()
{
	result r;
	
	r.basic();
	r.sub();
	r.sum();
	r.printdata();
}
