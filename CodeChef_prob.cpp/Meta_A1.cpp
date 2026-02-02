#include <bits/stdc++.h>
#define ll long long 
#define endl '\n'
#define fase ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;
int main() {
  
    int t; 
    cin>>t;
// output Format :
// Case #1: 4
// Case #2: 3
// Case #3: 4
// Case #4: 0
// Case #5: 45
// Case #6: 3
// reaching format /////
    for(int i=1; i<=t; ++i)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; ++i) cin >> v[i];
        int dap = 0;
        for (int i = 0; i + 1 < n; ++i) {
            dap=max(dap, abs(v[i] - v[i + 1]));
            // jodi abs man hoy mint and mint+1
            //else
            //dap = max(dap, abs(v[i+1]- v[i+2]));
        }
        cout<<"Case #"<<i<<": "<< dap<< "\n";
    }
    return 0;
}
