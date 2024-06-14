#include<iostream>
using namespace std;

inline float mul( float a, float b)
{
    float mul;
    mul=a*b;
}

inline float cube( float c)
{
    float cube;
    cube=c*c*c;
}

int main()
{
    float x,y,z;
    cout<<"enter the value of x:";
    cin>>x;
    cout<<"enter the value of y:";
    cin>>y;
    cout<<"Multiplication:"<<mul(x,y);
    
    cout<<"\nenter the value of z:";
    cin>>z;
    cout<<"cube:"<<cube(z);
    
}
