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
// Meta Code: Nazmul_fiz ---  After ICPC Preli----
// ---Starting With Grace of Almighty----------//
//---------Meta:- Problem A ------------

int main()
{ 
    fase;
    int t;
    cin>>t;
    for (int i=1; i<=t; i++)
     {
        ll pi, ki;
        cin>>pi>>ki;
        bool ans=false;
        if(pi>=ki and pi<=2LL* ki- 2)
        { 
          ans=true;
        }
        if(!ans and (pi +2)%2 == 0)
        //Jodi false hoy and  jodin even hoy taile //
        {
            ll w= (pi+2)/2;
            if(w >= ki)
            {
               ans=true;
            }
        }
        cout<<"Case #" <<i<<": "<<(ans ? "YES" : "NO")<<endl;
    }
    return 0;
}