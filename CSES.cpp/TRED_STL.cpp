#include <bits/stdc++.h>
using namespace std;
/*
8.2 SET / MULTISET
=================
Keeps elements sorted automatically.
SCENARIOS:
- Dynamic ordering
- Maintaining k smallest / largest
- Sliding window median
*/
/*
8.2.1 SET (unique, sorted)
*/
void set_basic_example(vector<int>& a) {
    set<int> s;
    for (int x : a) s.insert(x);

    for (int x : s)
        cout << x << " ";
    cout << "\n";
}
/*
8.2.2 MULTISET (allows duplicates) 
============================= 
*/
void multiset_example(vector<int>& a) {
    multiset<int> ms;
    for (int x : a) ms.insert(x);
    // erase ONE occurrence
    ms.erase(ms.find(2));

    for (int x : ms)
        cout << x << " ";
    cout << "\n";
}
/*
8.2.3 MAINTAIN K SMALLEST ELEMENTS
============================
*/
vector<int> k_smallest(vector<int>& a, int k) {
    multiset<int> ms;

    for (int x : a) {
        ms.insert(x);
        if (ms.size() > k)
            ms.erase(prev(ms.end())); // remove largest
    }
    return vector<int>(ms.begin(), ms.end());
}
/*
8.2.4 SLIDING WINDOW MEDIAN
==========================
IDEA:
Two multisets:
- left (max half)
- right (min half)
*/
void sliding_window_median(vector<int>& a, int k) {
    multiset<int> lo, hi;

    auto balance = [&]() {
        while (lo.size() > hi.size() + 1) {
            hi.insert(*lo.rbegin());
            lo.erase(prev(lo.end()));
        }
        while (hi.size() > lo.size()) {
            lo.insert(*hi.begin());
            hi.erase(hi.begin());
        }
    };
    for (int i = 0; i < a.size(); i++) {
        if (lo.empty() || a[i] <= *lo.rbegin()) lo.insert(a[i]);
        else hi.insert(a[i]);
        balance();

        if (i >= k) {
            if (lo.find(a[i-k]) != lo.end())
                lo.erase(lo.find(a[i-k]));
            else
                hi.erase(hi.find(a[i-k]));
            balance();
        }

        if (i >= k-1)
            cout << *lo.rbegin() << " ";
    }
    cout << "\n";
}


#include <bits/stdc++.h>
using namespace std;

/*
8.3 MAP / UNORDERED MAP
======================
Stores key-value pairs.
SCENARIOS:
- Frequency counting
- Coordinate compression
- Indexing large values
*/
/*
8.3.1 FREQUENCY COUNT USING MAP
===============================
*/
void frequency_map(vector<int>& a) {
    map<int, int> freq;
    for (int x : a) freq[x]++;

    for (auto [key, cnt] : freq)
        cout << key << " -> " << cnt << "\n";
}
/*
8.3.2 FAST FREQUENCY USING UNORDERED_MAP
====================================
*/
void fast_frequency(vector<int>& a) {
    unordered_map<int, int> freq;
    for (int x : a) freq[x]++;

    cout << freq[2] << "\n";
}
/*
8.3.3 INDEXING LARGE VALUES (COORDINATE COMPRESSION)
========================
*/
vector<int> coordinate_compress(vector<int>& a) {
    vector<int> b = a;
    sort(b.begin(), b.end());
    b.erase(unique(b.begin(), b.end()), b.end());

    vector<int> compressed;
    for (int x : a) {
        compressed.push_back(
            lower_bound(b.begin(), b.end(), x) - b.begin()
        );
    }
    return compressed;
}

/* 
minimum number of steps”
“shortest path in grid”
“each move costs 1”
“minimum time” (without weights)

BFS — Unweighted Graph
=====================
- Shortest path with unit cost
- Level-by-level traversal
*/
vector<int> bfs(int n, vector<vector<int>>& adj, int src) {
    vector<int> dist(n, -1);
    queue<int> q;

    dist[src] = 0;
    q.push(src);

    while (!q.empty()) {
        int u = q.front(); q.pop();

        for (int v : adj[u]) {
            if (dist[v] == -1) {
                dist[v] = dist[u] + 1;
                q.push(v);
            }
        }
    }
    return dist;
}
/* Senarios:
cost is 0 or 1”
“flip cost”
“free move or paid move”
0–1 BFS
======================
EDGE WEIGHTS:
Only 0 or 1
*/
vector<int> zero_one_bfs(int n, vector<vector<pair<int,int>>>& adj, int src) {
    deque<int> dq;
    vector<int> dist(n, INT_MAX);

    dist[src] = 0;
    dq.push_front(src);

    while (!dq.empty()) {
        int u = dq.front();
        dq.pop_front();

        for (auto [v, w] : adj[u]) {
            if (dist[v] > dist[u] + w) {
                dist[v] = dist[u] + w;
                if (w == 0) dq.push_front(v);
                else dq.push_back(v);
            }
        }
    }
    return dist;
}