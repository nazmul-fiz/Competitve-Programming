#include <bits/stdc++.h>
#define ll long long 
#define endl '\n'
#define fase ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
// Upper Bound: find the imidiate greatest value. of given element. 
// Searching in Binary Search
// using upper bound : 
// like this_  int cnt= upper_bound(v.begin(), v.end(), r)- lower_bound(v.begin(), v.end(), l);
int upper_bound(vector<int>&v, int elem)
{
  int lo=0; int hi=v.size()-1;
  int mid;
  while(hi-lo>1)
  {
    int mid= (hi+lo)/2;
    if(v[mid] <= elem)
    {
      lo= mid+1;
    }
    else{
      hi= mid;
    }
  }
  if(v[lo]>elem)
  {
    cout<<"paisi Dane"<<endl;
    return lo;
  }
  else if(v[hi]>elem)
  {
    cout<<"Paisi Bame"<<endl;
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
   int ne= upper_bound(v, elem);
   
   cout<<ne<<" "<<(ne != -1 ? v[ne]: -1)<<endl; 
   //printing form: ne means= "Paisi Dane" Just::: Then v[ne] means the two valuse that are store in the Vector upper bound//

    // To Protect Error we use to check the -1 hole return -1 or the ne[Values deo]

    // First print index and pore man .
   
    return 0;
}