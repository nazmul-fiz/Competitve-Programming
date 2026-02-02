#include <iostream>
using namespace std;

class nested {
  public:
  int x,y;
  void input()
  {
  cout<<"Enter the Two Numbers: ";
  cin>>x>>y;
  }
  
  void display()
  {
    cout<<"The Sum of two numbers is: "<< x+y ;
  }
  void call()
  {
    input();
    display();
  }
};
int main() 
{
  nested obj;
  obj.call();
  
    return 0;
}