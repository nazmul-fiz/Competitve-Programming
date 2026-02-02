#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define fase ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
int main()
{
fase
ll T; cin>>T;
for(ll cs=1; cs<=T; cs++)
{
    ll n; cin>>n;
    vector<ll> a(n);
    for(ll i = 0; i < n; i++) cin >> a[i];
    ll maxhi = *max_element(a.begin(), a.end());
    ll maxDiff = 0;
    for(ll i = 1; i < n; i++) maxDiff=max(maxDiff, abs(a[i]-a[i-1]));
    
    ll lo = 0, hi = max(maxhi, maxDiff), ans = hi;
    
    auto sobpaile=[&](ll h) -> bool 
    {
        ll i = 0;
        while(i < n)
        {
            ll mn = a[i];
            ll j = i;
            while(j + 1 < n && abs(a[j+1] - a[j]) <= h){
                j++;
                mn = min(mn, a[j]);
            }
            if(mn > h) return false;
            i = j + 1;
        }
        return true;
    };
    
    // output Expected 
    
//     Case #1: 3
// Case #2: 10
// Case #3: 4
// Case #4: 42
// Case #5: 42
// Case #6: 2
// Case #7: 1
// Case #8: 3

    while(lo <= hi){
        ll mid = (lo + hi) / 2;
        if(sobpaile(mid)){
            ans = mid;
            hi = mid - 1;
        } else {
            lo = mid + 1;
        }
    }
    cout << "Case #" << cs << ": " << ans << endl;
}
return 0;
}