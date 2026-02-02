#include <bits/stdc++.h>// for taking all header file included
using namespace std;

int main() 
{
    int *a= new int; // use "new" to start dynamic memory access[known as access more memory]
    *a = 14;
    float *b=new float;
    *b= 122.23;
    cout << a<<"\n"<< *b << endl;
    return 0;
}
