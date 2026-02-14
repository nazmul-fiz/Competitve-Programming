// Example 3: Here is a short program that illustrates how local variables can be declared anywhere
// within a block:

#include <iostream>
#define Nazmul_Code int main()
using namespace std;
Nazmul_Code
{
    int a;
    cout << " Enter number : ";
    cin >> a;

    int i, fact = 1; // here we Declare Local variables

    for (i = a; i >= 1; i--)
        fact = fact * i;
    cout << " Factorial of this Nunber is  " << fact;
    return 0;
}