#include<iostream>
using namespace std;
class person
{
	public:
	string nm;
	int age;
	void pdata()
	{
		cout<<"Enter Person name : ";
		cin>>nm;
			
		cout<<"Enter Person age : ";
		cin>>age;
	}
		
	void ppdata()
	{
		cout<<"\n Person name is : "<<nm;
		cout<<"\n Person age is : "<<age;
	}
};

class student
{
	public:
	int m1,m2,m3,mark;
	float pr;
	void stdata()
	{
		cout<<"Enter subject 1 mark : ";
		cin>>m1;
			
		cout<<"Enter subject 2 mark : ";
		cin>>m2;
			
		cout<<"Enter subject 3 mark : ";
		cin>>m3;
			
		pr = (m1 + m2 + m3) / 3;
	}
	void pstdata() 
	{	
        cout<<"\n Percentage : "<<pr<<"%";
    }
};

class teacher
{
	public:
	int sal;
	void salary()
	{
		cout<<"Enter teacher's salary : ";
		cin>>sal;
	}
	void psalary()
	{
		cout<<" salary : "<<sal;
	}
};

class showdata: public person,public student, public teacher
{
	public:
	void get()
	{
		pdata();
		stdata();
		salary();
	}
	void print()
	{
		ppdata();
		pstdata();
		psalary();
	}
};

main()
{
	showdata sh;
	
	sh.get();
	sh.print();
}
