#include<iostream>
using namespace std;

class Triangle
{
	int a,b,c;
	public:
	
	void inputdata()
	{
	cout<<"enter side a of triangle:";
	cin>>a;
	
	cout<<"enter side b of triangle:";
	cin>>b;
	
	cout<<"enter side c of triangle:";
	cin>>c;	
    }
    
    void type()
    {
    	if(a==b & b==c & c==a)
		{
			cout<<"It is equilateral triangle";
		}
		
		else if(a=b || b==c || c==a)
    	{
    		cout<<"It is isosceles triangle";
		}
		
		else
		{
			cout<<"It is scalene triangle";
		}
	}
};

main()
{
	Triangle t;
	t.inputdata();
	t.type();
}
