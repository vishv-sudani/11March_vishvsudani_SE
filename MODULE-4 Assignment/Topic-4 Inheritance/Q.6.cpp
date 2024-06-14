#include <iostream>
using namespace std;

class Vishv{
  private:
    int pvt = 1;

  protected:
    int prot = 95;

   public:
    int publ = 111;

    int getprivate(){
      return pvt;
    }
};

class Goat : protected Vishv{
  public:
    int getprotected(){
      return prot;
    }

    int getpublic(){
      return publ;
    }
};

int main() 
{
  Goat goat;
  cout<<" Private cannot be accessed.";
  cout<<"\n Protected : "<<goat.getprotected();
  cout<<"\n Public : "<<goat.getpublic();
}
