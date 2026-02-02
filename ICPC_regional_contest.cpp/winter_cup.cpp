#include <bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;

int main()
{
  int t; cin>>t;
  while(t--)
  {
    ll n; cin>>n;
    
    vector<int>v(n);
    
    for(int i=0; i<n; i++)
    {
      v[i]= i+1;
    }
    
    
     
    vector<int>v2(n);
    for(int i=0; i<n; i++)
    {
     
     v2.push_back(v[i]);
      sort(v.rbegin(), v.rend());
    }
    
   
    
    for(int i=0; i<n; i++)
    {
      cout<<v2[i]<<" "<<v2[n-1];
    }
    
    
  }
  
  
  cout<<endl;

    return 0;
}