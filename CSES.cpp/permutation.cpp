#include<bits/stdc++.h>
#define ll long long 
#define endl '\n'
#define db double
#define fase ios_base::sync_with_stdio(false);cin.tie(NULL);
#define eps 1e6
#define eps2 1e9
#define gcd(a, b)  __gcd(a, b)
#define lcm(a, b)  (a/gcd(a,b)*b)
using namespace std;

int main() 
{
   int n;
     cin>>n;
     if(n==2 or n==3){
       cout<<"NO SOLUTION";
       return 0;
     }
       for(int i=2; i<=n; i+=2)
       {
         cout<<i<<" ";
       }
       for(int i=1; i<=n; i+=2)
       {
         cout<<i<<" ";
       }
       
   cout<<endl;
  
   return 0;
}