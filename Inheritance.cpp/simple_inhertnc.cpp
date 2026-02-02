#include <iostream>
using namespace std;

class animal{ // base case; that data are common in all 
  public:
  void eat()
  {
    cout<<"I can Eat"<<endl;
  }
  void sleep()
  {
    cout<<"i can sleep"<<endl;
  }
};
//derived class, // this is the specific data for one and connect the common data;
class dog: public animal{ // connect the first base case class
  public:
  void bark()
  {
    cout<<"I can bark, woof woof !!"<<endl;
  }
};

int main()
{
    dog dog1;
    dog1.eat();
    dog1.sleep();
    dog1.bark();
    
    return 0;
}