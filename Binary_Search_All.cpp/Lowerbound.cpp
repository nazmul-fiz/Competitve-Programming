#include <bits/stdc++.h>
#define ll long long 
#define endl '\n'
#define fase ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int lower_bound(vector<int>&v, int elem)
{
  int lo=0; int hi=v.size()-1;
  int mid;
  while(hi-lo>1)
  {
    int mid= (hi+lo)/2;
    if(v[mid] < elem)
    {
      lo= mid+1;
    }
    else{
      hi= mid;
    }
  }
  if(v[lo]>=elem)
  {
    cout<<"paisi Bame"<<endl;
    return lo;
  }
  else if(v[hi]>=elem)
  {
    cout<<"Paisi Dane"<<endl;
    return hi;
  }
  else{
    return -1;
  }
}
int main() 
{
   fase
   int n; cin>>n;
   vector<int>v(n);
   for(int i=0; i<n; i++)
   {
     cin>>v[i];
   }
   
  // sort(v.begin(), v.end());     sort kore nite hobe jodi na thake 

   int elem; cin>>elem;
   int ne= lower_bound(v, elem);
   
   cout<<ne<<" "<<v[ne]<<endl;   // First print man and pore index kothay korte hobe. 
   
    return 0;
}