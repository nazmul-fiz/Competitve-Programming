#include <iostream>
using namespace std;

class input{
public:
int a,b;
 input() // constractor use without declare the function type
 // class and function name must be same
 {
   cout<<"Enter the Two numbers = ";
   cin>>a>>b;
 }
 void sum()
 {
   cout<<"The sum of two numbers = "<< a + b;
 }
};
int main() 
{
  input myobj; // it can access the class and function same time
  myobj.sum();
    return 0;
}