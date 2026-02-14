//Example 2. On your own, try declaring local variables at various points in a C++ program. Try the
// same in a C program, paying attention to which declarations generate errors.


#include <iostream>
#define Nazmul_Code  int main()
using namespace std;

int intAbs(int n);
long longAbs(long n);
double doubleAbs(double n);

Nazmul_Code 
{
    cout<<"Absolute value of -10: " <<intAbs(-10) <<endl<<endl;
    cout<<"Absolute value of -10L: " << longAbs(-10L) <<endl<<endl;
    cout << "Absolute value of -10.01: " << doubleAbs(-10.01) <<endl<< endl;
    return 0;
}

int intAbs(int n) {
    cout << "In integer intAbs()\n";
    return n < 0 ? -n : n;
}

long longAbs(long n) {
    cout << "In long longAbs()\n";
    return n < 0 ? -n : n;
}

double doubleAbs(double n) {
    cout << "In double doubleAbs()\n";
    return n < 0 ? -n : n;
}
