#include <iostream>
#include <vector>

using namespace std;

const int MAX = 1000001;
int spf[MAX];

// Precompute Smallest Prime Factor for each number
void sieve() {
    for (int i = 2; i < MAX; i++) spf[i] = i;
    for (int i = 2; i * i < MAX; i++) {
        if (spf[i] == i) {
            for (int j = i * i; j < MAX; j += i) {
                if (spf[j] == j) spf[j] = i;
            }
        }
    }
}

// Function to count divisors using prime factorization
int Count_divi(int x) {
    if (x == 1) return 1;
    int total_divisors = 1;
    
    while (x > 1) {
        int p = spf[x];
        int count = 0;
        while (x % p == 0) {
            count++;
            x /= p;
        }
        total_divisors *= (count + 1);
    }
    return total_divisors;
}

int main() {
    // Fast I/O is crucial here
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    sieve(); // Precompute once

    int n;
    cin >> n;
    while (n--) {
        int x;
        cin >> x;
        cout << Count_divi(x) << "\n";
    }

    return 0;
}