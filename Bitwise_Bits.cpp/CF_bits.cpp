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
    int t; cin>>t;
    while(t--)
{
        
int n, k; cin>>n>>k;

int cnt=0;
for(int i=31; i>=0; --i)
{
   if(( n & (1<<i)) !=0)
   { 
    cnt++; 
   }
   
int lsb= (n & (~((1<<(i+1)) -1 )));
}
int arr(n);

int and_all = arr[n];
for(int i=1; i<n; i++) {
    and_all &= arr[i];
}
int mx = max(and_all, n)



cout<<mx << endl;
}
checkmate 
}