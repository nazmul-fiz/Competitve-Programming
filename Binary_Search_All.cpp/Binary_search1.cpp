#include <bits/stdc++.h>
#define ll long long 
#define endl '\n'
#define fase ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main() 
{
   fase
   int n; cin>>n;
   vector<int>v(n);
   for(int i=0; i<n; i++)
   {
     cin>>v[i];
   }
   int findi; cin>>findi;
   
   int lo =0; int hi=n-1;
   int mid;
   while(hi-lo >1)
   {
     int mid=lo+ (hi-lo)/2;
     if(v[mid] < findi)
     {
       lo =mid+1;
     }
     else{
       hi= mid;
     }
   }
     if(v[lo] ==findi) {cout<<"Paisi Dane"<<endl;}
     else if(v[hi] == findi) {cout<<"Paisi Bame"<<endl;}
     else{
       cout<<"NAi Vai"<<endl;
     }
    return 0;
}