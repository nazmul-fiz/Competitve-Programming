#include <iostream>
using namespace std;
 class A{
   public:
   
   int num1,num2;
   void fun(); // declare the functions
   void calculate();
 };
 // call by- function type, class name, function name 
void A::fun() // here we define the function
{
  cout<<"Enter the two number: ";
  cin>>num1>>num2;
}
void A calculate()
{
 int result= num1+num2;
 cout<<"The sum of the two number = "<< result;
 
}
int main() 
{
    A obj1
    obj1.fun();
    obj1.calculate();
    
    return 0;
}