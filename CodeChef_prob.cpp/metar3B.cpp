#include<bits/stdc++.h>
#define ll long long 
#define endl '\n'
#define db double
#define fase ios_base::sync_with_stdio(false);cin.tie(NULL);
#define eps 1e6
#define eps2 1e9
#define herv __int128
#define gcd(a, b)  __gcd(a, b)
#define lcm(a, b)  (a/gcd(a,b)*b)
using namespace std;
// Meta Code: Nazmul_fiz ---  After ICPC Preli----
// ---Starting With Grace of Almighty----------//
//---------Meta:- Problem B ------------
int main()
{
    int t; cin>>t;
    for(int i=1; i<=t; i++)
     {
        int pi, ki; cin>>pi >>ki;
        vector<int>paisi(pi);
        for(int &x:paisi)
        {
            cin>>x;
        }
        ll nai=0;
        for(int j=0;j<ki;j++)
        {
            ll b; cin>>b;
            nai+=b;
        }
        sort(paisi.rbegin(), paisi.rend());
        
        ll ans=0;
        int g=0;
        while(g < pi && nai>0)
        {
            int j=g;
            while(j<pi and paisi[j] == paisi[g]) j++;
            ll mad=j - g;
            if(nai <mad) break;
            ans +=mad;
            nai -=mad;
            g =j;
        }
        cout<< "Case #" << i << ": " << ans<<endl;
    }
    return 0;
}