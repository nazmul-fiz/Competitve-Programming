#include <bits/stdc++.h>
#define ll long long 
#define endl '\n'
#define fase ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main() {
    fase;
    int t; cin >> t;
    for (int tc = 1; tc <= t; ++tc) {
        int n;
        cin >> n;
        vector<int> d(n + 1), r(n + 1);

        for (int i = 1; i <= n; ++i) cin >> d[i];
        for (int i = 1; i <= n; ++i) cin >> r[i];

        // in the Second test case that the more it Become that best it Comes to the End 
        // The other things that make more move 
        

        bool achi = true;
        for (int i = 1; i <= n; ++i)
            if (d[i] > r[i]) achi = false;

        if (!achi) {
            cout << "Case #" << tc << ": -1" << endl;
            continue;
        }

        vector<vector<int>> tri(n + 1), cau(n + 1);

        for (int i = 1; i <= n; ++i) tri[d[i]].push_back(i);
        for (int i = 1; i <= n; ++i)
            if (d[i] != r[i]) cau[r[i]].push_back(i);  

        vector<pair<int, int>> pa1;
        for (int v = 1; v <= n; ++v) {
            if (cau[v].empty()) continue;
            if (tri[v].empty()) {
                achi = false;
                break;
            }
            int rev = tri[v].back();
            for (int idx : cau[v]) {
                pa1.emplace_back(rev, idx);
                tri[v].push_back(idx);
            }
        }

        if (!achi) {
            cout << "Case #" << tc << ": -1" << endl;
            continue;
        }

        cout << "Case #" << tc << ": "<< pa1.size() << endl;
        for (auto &p : pa1)
            cout << p.first << ' ' << p.second << endl;
    }
    return 0;
}