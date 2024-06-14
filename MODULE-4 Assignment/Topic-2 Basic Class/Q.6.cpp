#include<iostream>
using namespace std;

class Person
{
	int age;
	string name,country;
	public:
	void Data()
	{
		cout<<"enter age:";
		cin>>age;
		
		cout<<"enter name:";
		cin>>name;
		
		cout<<"enter country:";
		cin>>country;
		
		cout<<"Person's Name is:"<<name;
		cout<<"\nPerson's age is:"<<age;
		cout<<"\nPerson's country is:"<<country;
	}
};

int main()
{
	Person pr;
	pr.Data();
}
