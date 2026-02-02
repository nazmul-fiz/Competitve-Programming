#include <iostream>
using namespace std;
// base case;
class animal{
  public:
  void animalsound()
  {
    cout<<"animal makes a sound\n";
  }
};
// using the different class and using same function name;
class dog{
  public:
  void animalsound()
  {
    cout<<"The dog says: bow bow!\n";
  }
};
class goat{
  public:
  void animalsound()
  {
    cout<< "The goat says: meeh mhee!\n";
  }
};
int main() 
{
    animal myanimal;
    dog mydog;
    goat mygoat;
    
    myanimal.animalsound();
    mydog.animalsound();
    mygoat.animalsound();
    
    return 0;
}