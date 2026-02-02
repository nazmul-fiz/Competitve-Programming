#include <bits/stdc++.h>
using namespace std;
/*
7.4 PROBABILITY BASICS
=====================
USED FOR:
- Simple probability
- Expected value
- Random experiments
- Counting favorable outcomes
IMPORTANT:
Probability = Favorable outcomes / Total outcomes
*/
/*
7.4.1 BASIC PROBABILITY
======================
Computes probability as double.

SCENARIOS:
- Dice problems
- Coin toss
- Choosing random elements
*/

double probability(int favorable, int total) {
    if (total == 0) return 0.0;
    return (double)favorable / total;
}

/*
7.4.2 EXPECTATION (LINEARITY OF EXPECTATION)
===============================
Computes expected value.

FORMULA:
E = Σ (value × probability)

SCENARIOS:
- Expected number of operations
- Expected hits
*/

double expected_value(vector<int>& values,
                      vector<double>& probabilities) {
    double exp = 0.0;
    for (int i = 0; i < values.size(); i++) {
        exp += values[i] * probabilities[i];
    }
    return exp;
}

/*
7.4.3 EXPECTED NUMBER OF SUCCESS
==============================
Expected successes in independent trials.

FORMULA:
E = n × p

SCENARIOS:
---------
- Expected heads in coin toss
- Expected correct answers
*/
double expected_success(int trials, double success_prob) {
    return trials * success_prob;
}

/*
7.4.4 PROBABILITY USING COMBINATORICS
=================================
Uses nCr to compute probability.

SCENARIOS:
- Card problems
- Selecting objects randomly
*/
double probability_using_combinations(ll favorable, ll total) {
    return (double)favorable / total;
}
/*
MAIN FUNCTION
============
*/
int main() {

    // Basic probability
    cout << "Probability of rolling 6 on dice: "
         << probability(1, 6) << "\n";

    // Expected value
    vector<int> values = {1, 2, 3};
    vector<double> probs = {0.2, 0.3, 0.5};
    cout << "Expected value: "
         << expected_value(values, probs) << "\n";

    // Expected successes
    cout << "Expected heads in 10 tosses: "
         << expected_success(10, 0.5) << "\n";

    return 0;
}



#include <bits/stdc++.h>
using namespace std;
using ll = long long;
/*
7.2 COUNTING & COMBINATORICS
=======================
USED FOR:
- Counting number of ways
- Arrangements & selections
- Probability & expectation
- Large constraints with modulo
*/
/*
7.2.1 CONTRIBUTION TECHNIQUE
=============================
Counts contribution of each element independently
instead of iterating all subarrays/subsets.
SCENARIOS:
- Sum of all subarray sums
- Contribution of each element in subsets
- Counting weighted sums
FORMULA:
Element a[i] contributes:
(i + 1) * (n - i) times in subarrays
*/
ll contribution_subarray_sum(vector<ll>& a) {
    ll n = a.size();
    ll total = 0;

    for (ll i = 0; i < n; i++) {
        ll contribution = a[i] * (i + 1) * (n - i);
        total += contribution;
    }
    return total;
}
/*
7.2.2 BIG MOD & MODULAR EXPONENTIATION
================================
Computes (a^b) % mod efficiently.
SCENARIOS:
- Large power computations
- Modular inverse
- Probability problems
*/
ll mod_pow(ll base, ll exp, ll mod) {
    ll result = 1;
    base %= mod;

    while (exp > 0) {
        if (exp & 1)
            result = (result * base) % mod;
        base = (base * base) % mod;
        exp >>= 1;
    }
    return result;
}
/*
7.2.3 FACTORIAL PRECOMPUTATION
===========================
Precomputes factorials modulo mod.
 SCENARIOS:
- nCr
- Permutations
- Counting arrangements
*/
const int MAXN = 1e6;
const ll MOD = 1e9 + 7;
ll fact[MAXN + 1];

void precompute_factorial() {
    fact[0] = 1;
    for (int i = 1; i <= MAXN; i++) {
        fact[i] = (fact[i - 1] * i) % MOD;
    }
}
/*
7.2.4 nCr (COMBINATION)
===================
Computes nCr % mod
SCENARIOS:
- Choose k items from n
- Probability problems
- Subset counting
REQUIRES:
- mod is prime
- factorials precomputed
*/
ll nCr(ll n, ll r) {
    if (r < 0 || r > n) return 0;
    ll numerator = fact[n];
    ll denominator = (fact[r] * fact[n - r]) % MOD;
    return (numerator * mod_pow(denominator, MOD - 2, MOD)) % MOD;
}
/*
7.2.5 PERMUTATIONS (nPr)
======================

Counts ordered selections.
SCENARIOS:
- Seating arrangements
- Ordering problems
- Unique permutations
*/
ll nPr(ll n, ll r) {
    if (r < 0 || r > n) return 0;
    return (fact[n] * mod_pow(fact[n - r], MOD - 2, MOD)) % MOD;
}
/*
7.2.6 COMBINATIONS WITH REPETITION
==============================
Select r items from n types with repetition allowed.
FORMULA:
C(n + r - 1, r)
SCENARIOS:
- Stars and bars problems
*/
ll combination_with_repetition(ll n, ll r) {
    return nCr(n + r - 1, r);
}
/*
MAIN FUNCTION
==============
*/
int main() {
    precompute_factorial();

    vector<ll> a = {1, 2, 3};

    // Contribution technique
    cout << "Subarray Sum Contribution: "
         << contribution_subarray_sum(a) << "\n";

    // Big mod exponentiation
    cout << "2^10 mod MOD: "
         << mod_pow(2, 10, MOD) << "\n";

    // nCr example
    cout << "5C2: "
         << nCr(5, 2) << "\n";

    // nPr example
    cout << "5P2: "
         << nPr(5, 2) << "\n";

    // Combination with repetition
    cout << "Combination with repetition (n=3, r=2): "
         << combination_with_repetition(3, 2) << "\n";

    return 0;
}