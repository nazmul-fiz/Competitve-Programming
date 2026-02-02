             /**************************************************************************************
            *                                                                                     *
            |                                 Nazmul_Fiz                                          |
            *                                 Date: 24/ 1/ 26                                     *
            |                      Topic/ Approach: PQ Marathon Contest 2026 
            **************************************************************************************/ /*
                             Building Instinct to Sort the Life out                              */


#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> OS;
typedef tree<int, null_type, less_equal<int>, rb_tree_tag,tree_order_statistics_node_update> OMS;
// //constants :
// const int   N                               = (int) 1e6+5;
// const int   M                               = (int) 1e9+5;
// const int   mod                             = (int) 1000000007;
// const int   max_prime                       = (int) 1e6+3;
// const int   BLK                             = (int) 700;
//data_type_compressions :
#define     ll                              long long
#define     ull2                            unsigned long long int
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
#define     gcd(a, b)                       __gcd(a, b)
#define     lcm(a, b)                       (a/gcd(a,b)*b)
#define     checkmate                       return 0;
#define     UNDEFINED                       0x3f
#define     INF                             LLONG_MAX
#define     in_range(i,x,y)                 for(int i=x;i<=y;i++)
#define     in_range_back(i,x,y)            for(int i=y;i>=x;i--)
const int N=200000, M=998244353; 
 //
//..........................................Let's Start with the Grace of Almighty.......................................///



veci Get_od_indx(const veci &v, int n)
{
  int k= (n+1)/2;
  veci od;
  for(int i=0; i<k; i++)
  {
    od.pb(v[i]);
  }
  return od;
}


veci Get_ev_indx(const veci &v, int n)
{
  veci ev;
  int k=(n+1)/2;
  
  for(int i=k; i<n; i++)
  {
    ev.pb(v[i]);
  }
  reverse(ev.begin(), ev.end());
  return ev;
}


veci Build_orgi_Vec(const veci &od, const veci &ev, int n)
{
  veci newVec(n);
  int odi=0; int evi=0;
  
  for(int i=0; i<n; i++)
  {
    if(i%2==0)
    {
      newVec[i]= od[odi++];
    }
    else{
     newVec[i]= ev[evi++];
    }
  }
  return newVec;
}

e4
{
 int t; cin>>t;
 while(t--)
 {
  int n; cin>>n;
  veci v(n);
 
 for(int i=0; i<n; i++)
 {
   cin>>v[i];
 }
 
 veci even= Get_ev_indx(v, n);
 veci odd= Get_od_indx(v, n);
 
 veci Orginal_vec= Build_orgi_Vec(odd, even, n);
 
 
 for(auto x: Orginal_vec)
 {
   cout<<x<<" ";
 }
 cout<<endl;
 }
 
 
checkmate
 
}