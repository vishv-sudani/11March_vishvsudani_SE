#include<iostream> 
using namespace std; 
class India
{ 
	public: 
		India()
		{ 
			cout<<"India got independence in 1947\n"; 
		} 
}; 
class Bharat: public India
{ 
	public: 
		Bharat()
		{ 
			cout<<"India is Democratic country\n"; 
		} 
}; 
class Hindustan: public Bharat 
{ 
	public: 
		Hindustan() 
		{ 
			cout<<"India is Repulic country \n"; 			
		} 
};
int main() 
{ 
	Hindustan h;
}

