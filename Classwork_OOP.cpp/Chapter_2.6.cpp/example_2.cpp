#include <iostream> 
#define Nazmul_code int main()
using namespace std; 

inline int min(int n1, int n2)
{ 

    return (n1 < n2) ? n1 : n2; 

} 

inline double min(double n1, double n2)
{ 
    return (n1 < n2) ? n1 : n2; 

} 
inline int min(int n1, int n2, int c) 
{ 

    int tmp = (n1 < n2) ? n1 : n2; 

    return (tmp < c) ? tmp : c; 

} 

Nazmul_code { 

    int x=10,y=20,z=5; 
    double p1 = 4.5, q1 = 3.7; 

    cout << "Minimum of those 2  " << x << " and " << y << " is " << min(x, y)<<endl; 

    cout << "Minimum of those 2 " << p1 << " and " << q1 << " is " << min(p1, q1)<<endl; 

    cout << "Minimum of " << x << ", " << y << " and " << z << " is " << min(x, y, z)<<endl;
    return 0; 

} 