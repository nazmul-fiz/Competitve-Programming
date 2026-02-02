#include <bits/stdc++.h>
#define ll long long
using namespace std;


bool is_possible(vector<int>& arr, ll tim, ll t)
{
  ll prod=0;
  for(int machi: arr)
  {
    prod+=tim / machi;
    if(prod >= t) return true;
  }
  return false;
}

int main() 
{
    int n,t;
    cin>>n>>t;
    
    vector<int>v(n);
    for(int i=0; i<n; i++)
    {
      cin>>v[i];
    }
    
    ll lo =1;
    ll hi= *max_element(v.begin(), v.end()) * 1LL * t;
    ll ans= hi;
    while(lo<=hi)
    {
      ll mid= (hi+lo)/2;
      if(is_possible(v, mid, t))
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