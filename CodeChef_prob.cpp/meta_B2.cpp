#include <bits/stdc++.h>
#define ll long long 
#define endl '\n'
#define fase ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
const int MOD = 1000000007;

int64 modinv(int64 a, int64 m = MOD) 
{
    int64 b = m, u = 1, v = 0;
    while (b) {
        int64 t = a / b;
        a -= t * b; swap(a, b);
        u -= t * v; swap(u, v);
    }
    if (u < 0) u += m;
    return u;
}
int64 ways_for(int64 N, int64 e) 
{
    int64 num = 1, den = 1;
    for (int64 i = 1; i <= e; ++i) 
    {
        num = (num * ((N - 1 + i) % MOD)) % MOD;
        den = (den * i) % MOD;
    }
    return (num * modinv(den)) % MOD;
}

void factorize(int64 x, vector<pair<int64,int>>& fac) {
    fac.clear();
    for (int64 p = 2; p*p <= x; ++p) {
        if (x % p == 0) {
            int cnt = 0;
            while (x % p == 0) {
                x /= p;
                cnt++;
            }
            fac.emplace_back(p, cnt);
        }
    }
    if (x > 1) fac.emplace_back(x, 1);
}
void gen_divisors(const vector<pair<int64,int>>& fac, int idx,
                  int64 cur, vector<int64>& divisors) {
    if (idx == (int)fac.size()) {
        divisors.push_back(cur);
        return;
    }
    int64 p = fac[idx].first;
    int cnt = fac[idx].second;
    int64 val = cur;
    for (int i = 0; i <= cnt; ++i) {
        gen_divisors(fac, idx+1, val, divisors);
        val *= p;
    }
}

int main()
{
fase;
    int T;
    cin >> T;
    for (int tc = 1; tc <= T; ++tc)
    {
        int64 N, A, B;
        cin >> N >> A >> B;
        vector<pair<int64,int>> fac;
        factorize(B, fac);
        vector<int64> divisors;
        gen_divisors(fac, 0, 1, divisors);
        sort(divisors.begin(), divisors.end());

        int64 answer = 0;
        
        vector<int> expB(fac.size());
        for (int i = 0; i < (int)fac.size(); ++i) {
            expB[i] = fac[i].second;
        }
        for (int64 d : divisors)
        {
            if (d > A) break;
            int64 temp = d;
            vector<int> exp_d(fac.size());
            for (int i = 0; i < (int)fac.size(); ++i) {
                int64 p = fac[i].first;
                int cnt = 0;
                while (temp % p == 0) {
                    temp /= p;
                    cnt++;
                }
                exp_d[i] = cnt;
            }
            
//             Case #1: 3
// Case #2: 12
// Case #3: 16
// Case #4: 229471373

            int64 ways1 = 1;
            for (int i = 0; i < (int)fac.size(); ++i) {
                ways1 = (ways1 * ways_for(N, exp_d[i])) % MOD;
            }
            int64 ways2 = 1;
            for (int i = 0; i < (int)fac.size(); ++i) {
                int f = expB[i] - exp_d[i];
                ways2 = (ways2 * ways_for(N, f)) % MOD;
            }
            answer = (answer + ways1 * ways2) % MOD;
        }

        cout << "Case #" << tc << ": " << answer << "\n";
    }

    return 0;
}