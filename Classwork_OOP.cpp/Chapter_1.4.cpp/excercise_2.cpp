// In the Header file We define the ' int main() ' in to Nazmul_Code for showing it's done my Me  

// let's use comment in my code -- some

#include <iostream>
#define Nazmul_Code      int main()
#define fl   float
using namespace std;

Nazmul_Code
{
 fl a; // here we input a data 
 cout<<"Enter the Feet : "<<endl;
 cin>>a;
 // here we use 2 ways of comment to describe //

 /* in the we calculate the feet to Inches 
 we take input and make a formula to see the Feet into Inches  */
 
 fl cal = a*12;
 
 if(a!=0)    // here this shows a conditional statement - when input not '0' 
 {
   cout<<"The "<<a<<" Feet is : "<<cal<<" Inches";
 }
 else{
   cout<<"Wrong Input :(";
 }
return 0;
}