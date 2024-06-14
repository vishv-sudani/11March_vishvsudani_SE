#include <iostream>
using namespace std;

class Calc{
	public:
    int add(int a, int b)
	{
        return a + b;
    }

    double add(double a, double b)
	{
        return a + b;
    }

    int sub(int a, int b)
	{
        return a - b;
    }

    double sub(double a, double b)
	{
        return a - b;
    }

    int mul(int a, int b)
	{
        return a * b;
    }

    double mul(double a, double b)
	{
        return a * b;
    }

    int div(int a, int b)
	{
    	return a / b;
    }

    double div(double a, double b)
	{	
      return a / b;
    }
};

main() {
    Calc c;

    int a_int,b_int ;
    double a_double , b_double ;
    cout<<"--Integer value--\n";
    cout<<"Enter the value of a:";
    cin>>a_int;
    cout<<"Enter the value of b:";
    cin>>b_int;
    
    cout<<"\n--Double value--\n";
    cout<<"Enter the value of a:";
    cin>>a_double;
    cout<<"Enter the value of b:";
	cin>>b_double;

    cout<<"\nInteger Operations:";
    cout<<"\nAddition: "<<c.add(a_int,b_int);
    cout<<"\nSubtraction: "<<c.sub(a_int,b_int);
    cout<<"\nMultiplication: "<<c.mul(a_int,b_int);
    cout<<"\nDivision: "<<c.div(a_int,b_int);
    
    cout<<"\n\nDouble Operations:" ;
    cout<<"\nAddition: "<<c.add(a_double,b_double);
    cout<<"\nSubtraction: "<<c.sub(a_double,b_double);
    cout<<"\nMultiplication: "<<c.mul(a_double,b_double);
    cout<<"\nDivision: "<<c.div(a_double,b_double);
}
