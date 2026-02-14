//2. This short c++ program will not compile because the function sum() is not prototyped:
// This program will not compile

// Right approach of the code

#include<iostream>
#define Nazmul_Code   int main()
using namespace std;

int sum (int n1, int n2)
{
    return n1+n2;
}

Nazmul_Code
{
int n1, n2, n3;
cout << " Enter two numbers : ";
cin >> n1 >> n2;
n3 = sum(n1, n2);
cout << "Sum is: " << n3;
return 0;
}
