#include <iostream>
using namespace std;

double Pi = 3.14;
class Geometry 
{
public:
    double area(int length, int breadth)
	{
        return length * breadth;
    }

    double area(double base, double height)
	{
        return 0.5 * base * height;
    }

    double area(float radius)
	{
        return Pi * radius * radius;
    }
};

main()
{
    Geometry g;
    int length, breadth;
    double base, height;
    float radius;

    cout<<"Enter length and breadth of the rectangle: ";
    cin>>length>>breadth;

    cout<<"Enter base and height of the triangle: ";
    cin>>base>>height;
    
    cout<<"Enter radius of the circle: ";
    cin>>radius;
    
    cout<<"\nArea of Rectangle: "<<g.area(length, breadth);
    cout<<"\nArea of Triangle: "<<g.area(base, height);
    cout<<"\nArea of Circle: "<<g.area(radius);
}

