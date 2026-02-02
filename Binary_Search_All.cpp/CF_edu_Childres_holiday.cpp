#include<bits/stdc++.h>
#define ll long long 
#define endl '\n'
#define db double
#define fase ios_base::sync_with_stdio(false);cin.tie(NULL);
#define eps 1e6
#define eps2 1e9
#define gcd(a, b)  __gcd(a, b)
#define lcm(a, b)  (a/gcd(a,b)*b)

using namespace std;
ll m, n;
vector<ll>t, z, y;

pair<ll, vector<ll>>func(ll ne)
{
  ll tot=0;
  vector<ll>cnt(n, 0);
                                  // for checking time to see how much ballons inflated   //
  
  for(int i=0; i<n; i++)
  {
    ll cyc= t[i] * z[i] + y[i];
    ll ful_cyc= ne/cyc; 

    ll bal= ful_cyc * z[i];           // full cycle e koyta fulano jabe  //
    ll rem = ne % cyc;                // koto Time thake   //
    bal+= min(z[i], rem/t[i])         // Baloons in this time and Add this  //
    
    tot+=bal;
    cnt[i]=bal;
    
    if(tot >m) tot=m;
    
  }
   return {tot, cnt};
}

int main()
{
  fase;
  cin>>m>>n;
  
  t.resize(n);
  z.resize(n);
  y.resize(n);
  
  for(int i=0; i<n; i++)
  {
    cin>>t[i]>>z[i]>>y[i];
  }
  
  ll lo=0, hi = eps2, ans=-1;
  vector<ll>res;
  
  
  while(lo<=hi)
  {
    ll mid= (hi+lo)/2;
    auto[tot, cnt] = func(mid);
    
    if(tot >=m)
    {
      ans=mid;
      res=cnt;
      hi=mid-1;
    }
    else{
      lo=mid+1;
    }
  }
    ll sum=0;
    // distribute the ballons   //
    for(int i=0; i<n; i++)
    {
      ll dis= min(res[i], m-sum);
      res[i]=dis;
      sum+=dis;
    }
    cout<<ans<<endl;   // this is time That spend for All balloons //
    
    for(int i=0; i<n; i++)
    {
      cout<<res[i]<<" ";
    }
    cout<<endl;
    return 0;
  }