             /**************************************************************************************
            *                                                                                     *
            |                                 Nazmul_Fiz                                          |
            *                                 Date: 4/ 12/ 25                                *
            |                 Topic/ Approach: Lock unlock problems- matching the sequence 
            **************************************************************************************/ /*
                             Building Instinct to Sort the Life out                             */
 
 
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> OS;
typedef tree<int, null_type, less_equal<int>, rb_tree_tag,tree_order_statistics_node_update> OMS;
//constants :
const int   N                               = (int) 1e6+5;
const int   M                               = (int) 1e9+5;
const int   mod                             = (int) 1000000007;
const int   max_prime                       = (int) 1e6+3;
const int   BLK                             = (int) 700;
//data_type_compressions :
#define     ll                              long long
#define     ull                             unsigned long long int
#define     ui                              unsigned int
//STL :
#define     veci                            vector<int>
#define     vecb                            vector<bool>
#define     vecs                            vector<string>
#define     vecll                           vector<ll>
#define     sei                             set<int>
#define     sell                            set<ll>
#define     pai                             pair<int,int>
#define     pall                            pair<ll,ll>
#define     ips                             pair<string,int>
#define     lps                             pair<string,ll>
#define     ipc                             pair<char,int>
#define     lpc                             pair<char,ll>
#define     vip                             vector<ip>
#define     PQ                              priority_queue
#define     vlp                             vector<lp>
#define     hashmap                         unordered_map
#define     msi                             multiset<int>
#define     msl                             multiset<ll>
#define     pb                              push_back
#define     spb                             insert
#define     erase_duplicates(x)             x.erase(unique(all(x)),x.end());
#define     all(x)                          x.begin(),x.end()
#define     all_0(x)                        memset(x,0,sizeof(x))
#define     all_neg(x)                      memset(x,-1,sizeof(x))
#define     all_1(x)                        memset(x,1,sizeof(x))
//I/O :
#define     fase                            ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define     Read(x)                         freopen(x,"r",stdin)
#define     Write(x)                        freopen (x,"w",stdout)
#define     PI                              acos(-1)
#define     take_the_array_INT(x,o,n)       for(int i=o;i<=n;i++){scanf("%d",&x[i]);}
#define     take_the_array_LL(x,o,n)        for(int i=o;i<=n;i++){scanf("%lld",&x[i]);}
#define     take_the_array_DBL(x,o,n)       for(int i=o;i<=n;i++){scanf("%lf",&x[i]);}
#define     print_the_array_INT(x,o,n)      for(int i=o;i<=n;i++){printf("%d ",x[i]);}printf("\n");
#define     print_the_array_LL(x,o,n)       for(int i=o;i<=n;i++){printf("%lld ",x[i]);}printf("\n");
#define     cin_the_array(x,o,n)            for(int i=o;i<=n;i++){cin>>x[i];}
#define     cout_the_array(x,o,n)           for(int i=o;i<=n;i++){cout<<x[i]<<" ";}cout<<endl;
#define     __lcm(a,b)                      (a/__gcd(a,b)*b)
#define     int_in(x)                       scanf("%d",&x)
#define     ll_in(x)                        scanf("%lld",&x)
#define     dbl_in(x)                       scanf("%lf",&x)
#define     char_in(x)                      scanf(" %c",&x)
#define     str_in(x)                       scanf("%s",&x)
#define     int_in2(x,y)                    scanf("%d %d",&x,&y)
#define     int_in3(x,y,z)                  scanf("%d %d %d",&x,&y,&z)
#define     ll_in2(x,y)                     scanf("%lld %lld",&x,&y)
#define     ll_in3(x,y,z)                   scanf("%lld %lld %lld",&x,&y,&z)
#define     int_out(x)                      printf("%d",x)
#define     ll_out(x)                       printf("%lld",x)
#define     char_out(x)                     printf("%c",x)
#define     str_out(x)                      printf("%s",x)
#define     YES                             printf("YES\n")
#define     Yes                             printf("Yes\n")
#define     NO                              printf("NO\n")
#define     No                              printf("No\n")
#define     nl                              printf("\n")
#define     endl                            '\n'
//extras :
#define     e4                              int main()
#define     checkmate                       return 0;
#define     UNDEFINED                       0x3f
#define     INF                             LLONG_MAX
#define     in_range(i,x,y)                 for(int i=x;i<=y;i++)
#define     in_range_back(i,x,y)            for(int i=y;i>=x;i--)
 
 
//..........................................Let's Start with the Grace of Almighty.......................................

// Finding: https://codeforces.com/gym/106189/problem/F


int main()
{
  int t; cin>>t;
  
  ll p_sin= 760;
  ll p_doub= 1900;
  ll p_trpl= 5700;
  ll p_tets= 22800;
  
  ll lev= 18;
  ll line=0;
  ll sum=0;
  ll maxx= 130;
  
  
  while(t--)
  {
    string s; cin>>s;
    
    
    string s1= "single";
    string s2= "double";
    string s3= "triple";
    string s4= "tetris";
    
    ll ans=0; 
    if(s== s1) ans=1;
    else if(s == s2) ans= 2;
    else if (s== s3) ans= 3;
    else if (s == s4) ans =4;
    
    
    
    if (ans==1)
    {
      sum+= p_sin;
    }
    else if(ans==2)
    {
      sum+=p_doub;
    }
    else if(ans==3)
    {
      sum+=p_trpl;
      
    }
    else{
      sum+= p_tets;
    }
    
    line+=ans;
    
    while(line >= maxx)
    {
      lev++;
      
      p_sin+=40;
      p_doub+=100;
      p_trpl += 300;
      p_tets+=  1200;
      
      
      maxx+=10;
    }
    
  }
  cout<<sum<<" "<<lev<<endl;
  

  
//   //   pair<string,int>ps= { {s1, 760}, {s2, 1900}, {s3, 5700}, {s4, 22800}};
    
    
    
//   //   for(const &it : ps)
//   //   {
//   //     int sum=0;
//   //     sum+= it.second;
//   //     cout<<sum<<" "<<level<<<endl;
//   //   }
    
    
  checkmate
}