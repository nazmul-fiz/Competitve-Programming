// Example 1. Here is a program that contains both C and C++-style comments:

/*
This is a C- like comment .
This program determines whether
an integer is odd or even
*/
#include <iostream>
#define Nazmul_Code   int main()
using namespace std;

Nazmul_Code
{
int input; 

// this is a C++ single - line comment


// Here we read the number
cout << " Enter number to Check : ";
cin>>input ;


// here we see if even or odd 
if((input %2) ==0)
cout<< " Number is even \n";
else
cout << " Number is odd \n";
return 0;
}
