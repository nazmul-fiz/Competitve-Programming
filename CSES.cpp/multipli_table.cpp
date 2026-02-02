#include <bits/stdc++.h>
#define eps 1e6
#define endl '\n'
#define db double
#define ll long long
using namespace std;

/// Nazmul Code- Binaray Search on Ans, 
// Reduce the Search Space and Doing the Multiplication table
// Approach --- 1. Not just take the N*N matrix for table. Just reduce it and 
bool is_possible(ll x, ll n)
{
  ll cnt =0; 
  for(int i=1; i<=n; i++)
  {
    cnt+= min(n, x/i);
  }
  
  // ll mn= min(n*n+1)/2;
  // if(cnt>=mn) return cnt;
  
  return cnt>= (n*n+1)/2;
}

int main() 
{
    ll n; cin>>n;
    
    ll lo =1;
    ll hi= n*n;
    ll ans= hi;
    while(lo<=hi)
    {
      ll mid= (hi+lo)/2;
      
      if(is_possible(mid, n))
      {
        ans=mid;
        hi=mid-1;
      }
      else{
        lo= mid+1;
      }
    }
    cout<<ans<<endl;
    
    return 0;
}