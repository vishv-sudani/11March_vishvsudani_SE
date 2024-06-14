#include<iostream>
using namespace std;

class ip 
{
public:
	int l, w;
	
    void input() 
	{
        cout << "Enter rectangle length: ";
        cin >> l;
        cout << "Enter rectangle width: ";
        cin >> w;
    }
};

class op : public ip 
{
public:
    void Area() 
	{
        int area = l * w;
        cout << "\narea of Rectangle is: " << area;
    }
};

int main() 
{
    op o;
    o.input();
    o.Area();
}

