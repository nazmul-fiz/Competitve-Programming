#include <iostream>
#define Nazmul_code  int main()
using namespace std;

int Imn(int n1, int n2) 
{
    return (n1 < n2) ? n1 : n2;
}

double Dmn(double n1, double n2)
{
    return (n1 < n2) ? n1 : n2;
}

char Ch_min(char n1, char n2)
{
    return (n1 < n2) ? n1 : n2;
}

Nazmul_code
{
    int x = 10, y = 20;
    double p= 3.14, q= 2.71;
    char chr1= 'g', chr2= 'e';

    cout << "Smaller of " << x << " and " << y << " is: " << min(x, y) << endl;
    cout << "Smaller of " << p << " and " << q << " is: " << min(p, q) << endl;
    cout << "Smaller of '" << chr1 << "' and '" <<chr2<<"' is: '"<<min(chr1, chr2)<<"'"<<endl;

    return 0;
}