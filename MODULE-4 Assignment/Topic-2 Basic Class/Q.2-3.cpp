#include<iostream>
 using namespace std;

class acopen
{
    public:
    int acnum;
    string name,actype;
    
    void aopen()
    {
        cout<<"enter your name:";
        cin>>name;
        cout<<"please enter account type(savings/current):";
        cin>>actype;
        cout<<"enter your choice Account Number:";
        cin>>acnum;
    }
};

class deposite:public acopen
{
    public:
    int damount;
    
    void depo()
    {
        cout<<"\nEnter amount you wish to deposite(more than 2000):";
        cin>>damount;
        if(damount>=2000)
        {
            cout<<"cash deposited succeessfully";
        }
        else
        {
            cout<<"you can not deposite amount less than 2000";
        }
    }
};

class withdrawal:public deposite
{
    public:
    int wamount;
    
    void withd()
    {
        cout<<"\nEnter amount you wish to withdraw:";
        cin>>wamount;
        if(wamount<=damount)
        {
            cout<<"cash withdrawal successfull";
        }
        else
        {
            cout<<"Insufficient Balance";
        }
    }
};

class statment:public withdrawal
{
	public:
    void printdata()
    {
        cout<<"\nAccount Number:"<<acnum;
        cout<<"\nName:"<<name;
        cout<<"\nTotal Remaining Balance:"<<damount-wamount;
    }
};

int main()
{
    statment st;
    st.aopen();
    st.depo();
    st.withd();
    st.printdata();
}


