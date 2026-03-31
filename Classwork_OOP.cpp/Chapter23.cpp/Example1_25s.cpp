#include <bits/stdc++.h>
using namespace std;
#define int long long
 
signed main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--) {
		int n, k, p, m;
		cin >> n >> k >> p >> m;
		int a[n];
		for(int i = 0; i < n; i++) {
			cin >> a[i];
		}
		int temp[p-1];
		for(int i = 0; i < p-1; i++) {
			temp[i] = a[i];
		}
		sort(temp, temp+p-1);
		for(int i = 0; i < p-k; i++) {
			m -= temp[i];	
		}
		m -= a[p-1];
		if(m < 0) {
			cout << "0\n";
			continue;
		}
		int c = a[p-1];
		a[p-1] = 0;
		sort(a, a+n);
		for(int i = 1; i <= n-k; i++) {
			c += a[i];
		}
		cout << 1+m/c << "\n";
	}
}