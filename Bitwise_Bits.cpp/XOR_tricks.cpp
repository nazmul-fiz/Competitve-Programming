 
#include<bits/stdc++.h>
#define checkmate  return 0;
using namespace std;
//..........................................Let's Start with the Grace of Almighty.......................................

void Printing_Binary(int num)
{
    for(int i=10; i>=0; --i)
    {
        cout<<((num >> i) & 1);
    }
    cout<<endl;
}
int main()
{
    // swap the Number using XOR //
    int a=4; int b = 6;

    a= a ^ b; 
    b= b^a;

    a= a ^ b;

    cout<<a<<" "<<b<<endl;
}