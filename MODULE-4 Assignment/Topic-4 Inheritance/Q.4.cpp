#include <iostream>
using namespace std;
class basicinfo
{
    public:
    string nm;
    int id;
    void input()
    {
        cout<<"Enter Student name : ";
        cin>>nm;
        cout<<"Enter Student Id : ";
        cin>>id;
    }
};
class score
{
    public:
    int m,c,p;
    void sub()
    {
        cout<<"Enter Maths marks : ";
        cin>>m;
        cout<<"Enter Physics marks : ";
        cin>>p;
        cout<<"Enter Chemistry marks : ";
        cin>>c;
    }
};
class marksheet:public basicinfo,public score
{
    public:
    int total;
    float pr;
    void print()
    {
        cout<<"\n Student Name : "<<nm;
        cout<<"\n Student Id : "<<id;
        total = p + c + m;
        cout<<"\n Total marks : "<<total;
        pr = (p + c + m) / 3;
        cout<<"\n percentage :"<<pr;
        
        if(pr>=90)
		{
        	cout<<"\n Distrinction";
		}
		else if(pr>=60)
		{
			cout<<"\n First Class";
		}
		else if(pr>=50)
		{
			cout<<"\n Second Class";
		}
		else if(pr>=40)
		{
			cout<<"\n Third Class";
		}else
		{
			cout<<"\n You Failed in Exam";
		}
    }
};
int main()
{
    marksheet ms;
    ms.input();
    ms.sub();
    ms.print();
}
