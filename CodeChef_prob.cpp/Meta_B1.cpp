#include <bits/stdc++.h>
#define ll long long 
#define endl '\n'
#define fase ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
// 

// here is Expected output:
// Case #1: 1 3 3 7
// Case #2: 3 2 1 2
// Case #3: 2 1 1 6
// Case #4: 3 3
// Case #5: 1 4 1 1 1 1 16 1 1 1


void solve(ll caseNum, ll n, ll d, ll r) {
    cout << "Case #" << caseNum << ":";

    ll C = 1;
    for (ll c = 1; c <= d && c <= r; c++) {
        if (r % c == 0) {
            C = c;
        }
    }

    vector<ll> first(n, 1);
    vector<ll> factorsC;
    ll temp = C;
    for (ll i = 2; i * i <= temp; i++) {
        while (temp % i == 0) {
            factorsC.push_back(i);
            temp /= i;
        }
    }
    if (temp > 1) factorsC.push_back(temp);
    for (ll i = 0; i < factorsC.size(); i++) first[i % n] *= factorsC[i];

    vector<ll> second(n, 1);
    vector<ll> factorsRem;
    temp = r / C;
    for (ll i = 2; i * i <= temp; i++) {
        while (temp % i == 0) {
            factorsRem.push_back(i);
            temp /= i;
        }
    }
    if (temp > 1) factorsRem.push_back(temp);
    for (ll i = 0; i < factorsRem.size(); i++) second[i % n] *= factorsRem[i];
    for (ll x : first) cout << " " << x;
    for (ll x : second) cout << " " << x;
    cout << endl;
}

int main() {
    fase
    ll t;
    cin >> t;
    for (ll i = 1; i <= t; i++) {
        ll n, d, r;
        cin >> n >> d >> r;
        solve(i, n, d, r);
    }
    return 0;
}