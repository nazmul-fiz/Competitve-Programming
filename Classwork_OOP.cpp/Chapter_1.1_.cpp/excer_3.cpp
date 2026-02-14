#include <iostream>
#define Nazmul_Code int main()
using namespace std;

Nazmul_Code
{
    int n1, n2, i, mn;

    cout << "Enter two numbers: ";
    cin >> n1 >> n2;

    mn = (n1 > n2) ? n2 : n1;

    for (i = 2; i < mn; i++)
    {
        if ((n1 % i == 0) and (n2 % i == 0))
            break;
    }
    if (i == mn)
    {
        cout << "No common denominators" << endl;
        return 0;
    }

    cout << "The lowest common denominator is " << i << endl;

    return 0;
}
