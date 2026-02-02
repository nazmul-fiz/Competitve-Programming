#include <bits/stdc++.h>
using namespace std;
using ll = long long;

/*
- minimum / maximum
- at least / at most
- is it possible
*/
// For the Upperbound and Lowerbound Check //
int cnt1=0;
       
      int cnt= upper_bound(v.begin(), v.end(), r)- lower_bound(v.begin(), v.end(), l);
// end //

vector<ll> a;      // array 
ll n, k;           // size, constraint

/* -----------------------------------------------------
   BASE FEASIBILITY CHECK (Partition / Min Capacity)
*/
bool ok(ll mid) {
    ll current = 0;
    ll groups = 1;

    for (ll x : a) {
        if (x > mid) return false; // impossible case

        if (current + x <= mid)
            current += x;
        else {
            groups++;
            current = x;
        }
    }

    // --- CHANGE CONDITION BELOW ---

    // IF at most k groups"
    return groups <= k;

    // exactly k groups"
    // return groups == k;

    // IF at least k groups"
    // return groups >= k;
}

/*
SECTION 2: BINARY SEARCH ON INTEGER ANSWER
*/
/*
   2.1 MINIMUM X such that ok(X) == TRUE
   - Minimum time
   - Minimum cost
   - Minimum capacity
   - Minimum days
*/
ll binary_search_min(ll lo, ll hi) {
    while (lo < hi) {
        ll mid = lo + (hi - lo) / 2;

        if (ok(mid))
            hi = mid;      // TRUE → try smaller
        else
            lo = mid + 1;  // FALSE → need bigger
    }
    return lo;
}

 /* 2.2 MAXIMUM X such that ok(X) == TRUE
   - Maximum minimum distance
   - Maximum possible value
*/
ll binary_search_max(ll lo, ll hi) {
    while (lo < hi) {
        ll mid = lo + (hi - lo + 1) / 2; // +1 IMPORTANT

        if (ok(mid))
            lo = mid;      // TRUE → try bigger
        else
            hi = mid - 1;  // FALSE → go smaller
    }
    return lo;
}

/*
SECTION 3: BINARY SEARCH ON DOUBLE (REAL ANSWER)
*/
/* 
   CHANGE ok() FUNCTION SIGNATURE FOR DOUBLE
  REAL VALUE BINARY SEARCH
   - Distance
   - Time
   - Ratio
   - Average
*/
double binary_search_double(double lo, double hi) {
    for (int i = 0; i < 100; i++) { // 100 iterations enough
        double mid = (lo + hi) / 2.0;

        if (ok(mid))
            hi = mid;   // MINIMIZE answer
        else
            lo = mid;
    }
    return lo;
} 

/* -----------------------------------------------------
   IF  MAXIMUM real value//
   CHANGE PART:

   if (ok(mid))
       lo = mid;
   else
       hi = mid;
*/
// ANother path to Double  //
// db = double, robin = ans//
  ll lo=0; ll hi= 1e18; ll ans=-1;
    
    while(lo<=hi)
    {
      ll mid= (hi+lo)/2;
      db avg=  (double)sum2/ (2 *n);
      ll robin= 0;
      for(int i=0; i<n; i++)
      {
        if(v[i] < avg) robin++;
      }
      if(robin > n/2)
      {
        ans= mid;
        hi= mid-1;
      }
      else{
        lo= mid+1;
      }
    }
      
    cout<<ans<<endl;

/*
SECTION 4: PRECISION BASED BINARY SEARCH (EPS)
*/
/* 
   - Root finding
   - Equation solving
   - Geometry precision  
*/
double binary_search_eps(double lo, double hi) {
    const double EPS = 1e-6;

    while (hi - lo > EPS) {
        double mid = (lo + hi) / 2.0;

        if (ok(mid))
            hi = mid;
        else
            lo = mid;
    }
    return lo;
}
// Precise Value of the Double  //
int mid; 
  db lo =0.0; db hi= *max_element(v.begin(), v.end());
  while(hi-lo > nu)
  {
    db mid= (hi+lo)/2;
    
    ll pos=0;
    for(int len:v)
    {
      pos+=(ll) (len/mid);
    }
    if(pos>=k){
      lo=mid;
    }
    else{
      hi=mid;
    }
  }
  cout<<fixed<<setprecision(6)<<lo<<endl;

// SECTION 5: TIME / DAY BASED Uses 
// Machine,prod //
vector<ll> machines;
ll goal;

bool ok_time(ll mid) {
    ll produced = 0;
    for (ll speed : machines) {
        produced += mid / speed;
        if (produced >= goal)
            return true;
    }
    return false;
}
// Main function Things //
    cin >> n >> k;
    a.resize(n);  // if need to resize  //
    for (ll i = 0; i < n; i++) cin >> a[i];

    ll lo = *max_element(a.begin(), a.end());
    ll hi = accumulate(a.begin(), a.end(), 0LL);

    ll answer = binary_search_min(lo, hi);
    cout << answer << '\n';

#include<bits/stdc++.h>
#define ll long long 
using namespace std;

int h[N];
int dp[N];
int DP_Funct(int i)
{
    if(i==0) return 0;
    if(dp[i] != -1) return dp[i];
    int cost = INT_MAX;  //min Setting 
    // Way 1
    cost = min(cost, DP_Funct(i-1)- abs(h[i]- h[i-1]));
    //way 2 
    cost = min(cost, DP_Funct(i-2) + abs(h[i]- h[i-2]));
    return dp[i] = cost;
}
int main()
{
    memset(dp, -1, sizeof(dp));
    int n; cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>h[i];
    }
    cout<<DP_Funct(n-1);
}



#include <bits/stdc++.h>
using namespace std;
using ll = long long;
/*
8.1 PRIORITY QUEUE
=================
Maintains elements where the largest or smallest
element can be accessed in Complexity O(log n).
SCENARIOS:
- Dijkstra shortest path
- Greedy scheduling
- K largest / smallest elements
- Task processing by priority
*/
/*
8.1.1 MAX-HEAP (default)
===================
*/
void max_heap_example(vector<int>& a) 
{
    priority_queue<int> pq;   // max-heap
    for (int x : a) pq.push(x);

    while (!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }
   
    cout << "\n";
}
/* 
8.1.2 MIN-HEAP
==============
Use greater<T> comparator
*/
void min_heap_example(vector<int>& a) {
    priority_queue<int, vector<int>, greater<int>> pq; // min-heap
    for (int x : a) pq.push(x);
    while (!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << "\n";
}
/*
8.1.3 PRIORITY QUEUE IN DIJKSTRA
============================
STORE:
(pair<distance, node>)
*/
vector<ll> dijkstra(int n, vector<vector<pair<int,int>>>& adj, int src) {
    vector<ll> dist(n, LLONG_MAX);
    priority_queue<pair<ll,int>, vector<pair<ll,int>>, greater<>> pq;

    dist[src] = 0;
    pq.push({0, src});

    while (!pq.empty()) {
        auto [d, u] = pq.top(); pq.pop();
        if (d > dist[u]) continue;

        for (auto [v, w] : adj[u]) {
            if (dist[v] > dist[u] + w) {
                dist[v] = dist[u] + w;
                pq.push({dist[v], v});
            }
        }
    }
    return dist;
}