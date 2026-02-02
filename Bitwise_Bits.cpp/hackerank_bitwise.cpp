
#include<bits/stdc++.h>
#define checkmate  return 0;
using namespace std;
//..........................................Let's Start with the Grace of Almighty.......................................

// void Printing_Binary(int num)
// {
//     for(int i=10; i>=0; --i)
//     {
//         cout<<((num >> i) & 1);
//     }
//     cout<<endl;
// }


void Maxi_finding( int n, int k)
{
    int max_and=0;
    int max_or=0;
    int max_xor=0;
   

for(int i=1; i<=n; i++)
{ 

    for(int j=i+1; j<=n; j++)
    {
         int A, O, X;

        A= (i & j);
        O= (i | j);
        X = (i ^ j);

        if( A <k) max_and= max(max_and, A);
        if( O < k) max_or= max(max_or, O);
        if ( X < k) max_xor = max(max_xor, X);


    }
}

cout<<max_and<<endl;
cout<<max_or<<endl;
cout<<max_xor<<endl;
}

int main()
{
    int n, k;
    cin>>n>>k;

    Maxi_finding(n, k);

    checkmate
}