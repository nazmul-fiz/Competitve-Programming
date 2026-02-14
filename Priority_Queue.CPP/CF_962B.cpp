             /**************************************************************************************
            *                                                                                     *
            |                                 Nazmul_Fiz                                          |
            *                                 Date: 03/ 2/ 26                                    *
            |                      Topic/ Approach:  PQ Marathon  Contest 2026 
            **************************************************************************************/ /*
                             Building Instinct to Sort the Life out                              */


#include<bits/stdc++.h>
using namespace std;

//data_type_compressions :
#define     ll                              long long
#define     ull2                            unsigned long long int
#define     ui                              unsigned int
//STL :
#define     veci                            vector<int>
#define     fase                            vector<bool>
#define     vecs                            vector<string>
#define     vecll                           vector<ll>

#define     endl                            '\n'
//extras :
#define     e4                              int main()
#define     e42                             int128_t
#define     gcd(a, b)                       __gcd(a, b)
#define     lcm(a, b)                       (a/gcd(a,b)*b)
#define     checkmate                       return 0;
#define     UNDEFINED                       0x3f
#define     INF                             LLONG_MAX
#define     in_range(i,x,y)                 for(int i=x;i<=y;i++)
#define     in_range_back(i,x,y)            for(int i=y;i>=x;i--)
const int N=200000, M=998244353; 
 //

e4{
  // Git not Pushed /
  ll n, a, b;
  cin>>n>>a>>b;
  //hashing 
  string s, tmp; cin>>s;
  
  ll ans=0;
  for(int i=0; i<n;)
  {
    if(s[i]== '*')
    {
      i++; continue;
    }
    ll hobe= i;
    while(hobe < n and s[hobe]== '.')
    {
      hobe++;
    }
    ll len= hobe-i;
    
    ll mx=(len+1)/2;
    ll mn= len/2;
    
    if(a >= b)
    {
      ll HashA= min(a, mx);
      ll HashB= min(b, mn);
      
      a-= HashA;
      b-= HashB;
      ans += HashA+ HashB;
      
    }
    else  // eita B er ta Nibe //
    {
      ll hashB= min(b, mx);
      ll hashA= min(a, mn);
      b-= hashB;
      a-=hashA;
      ans += (hashA + hashB);
      }
     i=hobe;
    
  }
  cout<<ans<<endl;
  

  checkmate
}