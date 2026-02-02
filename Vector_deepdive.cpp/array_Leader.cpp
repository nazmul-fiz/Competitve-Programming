#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
  int n; cin>>n;
  
  vector<int>v(n);
  for(int i=0; i<n; i++)
  {
    cin>>v[i];
  }
  
  vector<int>nw;
  
  int mx= INT_MIN;
  
  for(int i=n-1; i>=0; i--)
  {
    
      if(v[i] >= mx)
      {
        nw.push_back(v[i]);
        mx= v[i];
      }
  }
  reverse(nw.begin(), nw.end());
  
  for(int tt: nw) cout<<tt<<" ";
  
  cout<<"\n";
  
return 0;
}