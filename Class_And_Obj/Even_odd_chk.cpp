#include <iostream>
using namespace std;
class A{
  public:
  int a, b;
  void input()
  {
    cout<<"Enter the two number: ";
    cin>>a>>b;
  }
  void avarage()
  {
    int avar= (a+b)/2;
    cout<<"The Avarage of Two number - "<<avar<<endl;
  }
  void even()
  {
    int evn = (a+b);
    if (evn % 2==0){
      cout<<"This is Even Number"<<endl;
    }
  }
  void odd()
  {
    int odd1 = (a+b);
    if (odd1 % 2 !=0){
      cout<<"This is ODD Number"<<endl;
    }
  }
};
int main() 
{
  A obj;
  obj.input();
  obj.avarage();
  obj.even();
  obj.odd();
  
  return 0;

}