#include <bits/stdc++.h>
using namespace std;

void fun(int *&p) // here we recieve pointer Reference. which is same as Ptr
// void fun(int *p) // here we recieve the ptr pointer in a pointer--
{
  cout<< &p<<endl; // printing the reference
  // if we print *p then output is 10; 
  // because *p is pointer of *ptr which reference is val, then val is 10;
}
int main() 
{
    int val= 10;
    int *ptr = &val;
    fun(ptr);
    
    cout << &ptr<< endl; // printing the pointer reference
    return 0;
}