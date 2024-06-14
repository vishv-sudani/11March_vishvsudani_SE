#include<iostream>
using namespace std;

class bankaccount
{
	int acnum,bal;
	
	public:
	void inputdata()
	{
		cout<<"enter account number:";
		cin>>acnum;	
				
	}
	void deposite()
	{
	 int damount,wamount;		
	cout<<"enter amount you want to deposite:";
	cin>>bal;
	
	cout<<"\nyour account balance is"<<bal;
	
	cout<<"\nenter amount you want to Withdraw:";
	cin>>wamount;	
	
	if(bal>=wamount)
	{
		cout<<"Cash withdrawal successfull";
	}
	else
	{
		cout<<"you have not enough balance to withdraw";
	}
	}
};

main()
{
	bankaccount b;
	b.inputdata();
	b.deposite();
}

