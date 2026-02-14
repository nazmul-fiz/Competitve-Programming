#include <iostream>
#define Nazmul_Code   int main()
using namespace std;
class Myclass
{
  int a;  // private data  
  
  public:
  void setA(int n)
  {
    a= n;
    
  }
  int getA()
  {
    return a;
  }
};


Nazmul_Code
{
  Myclass ob1, ob2;
  
  ob1.setA(100);
  ob2.setA(200);
  
  
 //this is Worng approach, while in private we cant access the private data without set and get function.
  // ob1.a= 10;
  // ob2.a= 99;
  
  
  
  
  cout<<"Value of the OB1 is = "<<ob1.getA()<<endl;
  cout<<"Value of the Ob2 is = "<<ob2.getA()<<endl;
  
return 0;
}
