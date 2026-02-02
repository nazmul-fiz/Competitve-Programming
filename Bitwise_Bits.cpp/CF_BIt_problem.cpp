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
   // from my Template code format  //
int n; cin>>n;

int cnt=0;
for(int i=31; i>=0; --i)
{
   if(( n & (1<<i)) !=0)
   { 
    cnt++; 
   }
}
cout<<cnt<<endl;

// // other is Build in function like __builtin_popcount(a)//

// cout<< __builtin_popcount(n)<<endl;

}