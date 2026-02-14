/* Excercise 2. Write a program that converts feet to inches. Prompt the user for feet and display the
equivalent number of inches. Have your program repeat this process until the user enters
0 for the number of feet. */


#include <iostream>
#define Nazmul_Code      int main()
#define fl   float
using namespace std;

Nazmul_Code
{
 fl a; 
 cout<<"Enter the Feet : "<<endl;
 cin>>a;
 
 fl cal = a*12;
 
 if(a!=0)
 {
   cout<<"The "<<a<<" Feet is : "<<cal<<" Inches";
 }
 else{
   cout<<"Wrong Input :(";
 }
return 0;
}