#include<bits/stdc++.h>
#define ll long long 
#define endl "\n"
#define fas ios_base::sync_with_stdio(false); cin.tie(NULL);
#define gcd(a, b)  __gcd(a, b)
#define lcm(a, b)  (a/gcd(a,b)*b)
using namespace std;
int main()
{
  int t; cin>>t;
  string s; 
  while(t--){
   int n; cin>>n;
   vector<int>v(n);
   for(int i=0; i<n; i++) cin>> v[i];
     cin>>s;
     
     
   //if sorted //
   int tmp= v[i];
   sort(tmp.begin(), tmp.end());
   
   if( tmp==v[i])
   {
     cout<<0<<endl;
     continue;
   }
  
   // if not sorted but char is all same N or S  //
   
   if(count(s.begin(), s.end(), 'N')== n or count(s.begin(), s.end(), 'S')== n)
   {
     cout<<-1<<endl;
     continue;
   }
   ///*************************************
   
   
   // for practice to using unordered_multimap //
   unordered_multimap<int, char>ump;
   for(int i=0; i<n; i++)
   {
     ump.insert({v[i], s[i]});
     
   }
   /**************************/
   
   // Manually sort and cnting // 
   vector<int>v2;
   for(auto &it: ump)
   {
     v2.push_back(it.first);
     
   }
   sort(v2.begin(), v2.end());
   
   //***********************
   int su=0,fu=0;
   for(int i=0; i<n; i++)
   {
     if(v[i]==v2[i]) su++;
    else break;
   }
   for(int i=n-1; i>=0; i--)
   {
     if(v[i]==v2[i]) fu++;
     else break;
   }
   /******************/
   if(su>0 or fu>0) cout<<1<<endl;
   else cout<<2<<endl;

}   
  return 0;
}