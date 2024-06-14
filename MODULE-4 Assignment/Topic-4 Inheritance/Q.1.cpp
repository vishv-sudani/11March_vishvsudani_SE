#include <iostream>
using namespace std;

class Cricketer{
public:
	string nm;
    int truns;
    int bestpf;
    int inn;
    double avgruns;
    
    void inputData() {
        cout<<"Enter batsman name: ";
        cin>>nm;
        
        cout<<"Enter total inn: ";
        cin>>inn;
        
        cout<<"Enter total runs: ";
        cin>>truns;
        
        cout<<"Enter batsman best performance: ";
        cin>>bestpf;

        calavgruns();
    }

    void calavgruns() {
        if(inn != 0) {
            avgruns = static_cast<double>(truns) / inn;
        } else {
            avgruns = 0;
        }
    }

    string getname(){
        return nm;
    }

    int getruns(){
        return truns;
    }

    int getbestpf(){
        return bestpf;
    }

    int getinn(){
        return inn;
    }

    double getavgruns(){
        return avgruns;
    }
};

class batsman : public Cricketer{
public:
    void displayData() {
        cout<<"\nBatsman name is: "<<getname();
        cout<<"\nBatsman total innings are: "<<getinn();
        cout<<"\nBatsman total runs are: "<<getruns();
        cout<<"\nBatsman best performance is: "<<getbestpf();
        cout<<"\nBatsman average runs are: "<<getavgruns();
    }
};

int main(){
    batsman b;
    b.inputData();
    b.displayData();
}

