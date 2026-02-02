#include <bits/stdc++.h>
using namespace std;
using ll = long long;

/*
7.3 DIVISIBILITY & DIGIT TECHNIQUES
==================================
cases:-
- Number property checking
- Digit-based constraints
- Counting numbers satisfying conditions
- Brute force optimization using math
*/

/*
7.3.1 SUM OF DIGITS
==================
Computes sum of digits of a number.

- Check divisibility by 3 or 9
- Digit DP (basic)
- Digit constraints problems
*/

int sum_of_digits(ll n) {
    int sum = 0;
    while (n > 0) {
        sum += (n % 10);
        n /= 10;
    }
    return sum;
}

/*
7.3.2 DIVISIBILITY RULES
=====================
COMMON RULES USED IN:
-----------------
- Divisible by 2 → last digit even
- Divisible by 3 → sum of digits % 3 == 0
- Divisible by 4 → last two digits % 4 == 0
- Divisible by 5 → last digit is 0 or 5
- Divisible by 9 → sum of digits % 9 == 0
*/

bool divisible_by_3(ll n) {
    return sum_of_digits(n) % 3 == 0;
}

bool divisible_by_4(ll n) {
    return (n % 100) % 4 == 0;
}

bool divisible_by_9(ll n) {
    return sum_of_digits(n) % 9 == 0;
}

/*
7.3.3 COUNTING MULTIPLES
=======================
Counts numbers divisible by k in range [L, R].

FORMULA:
count = R/k - (L-1)/k

SCENARIOS:
- Count divisible numbers
- Inclusion-exclusion
*/
ll count_multiples(ll L, ll R, ll k) {
    return (R / k) - ((L - 1) / k);
}

/*
7.3.4 COUNT NUMBERS WITH DIGIT PROPERTY
==================================
Counts numbers whose digit sum <= X in range.

SCENARIOS:
- Constraints on digits
- Preprocessing brute ranges
*/
ll count_with_digit_sum_limit(ll L, ll R, int maxSum) {
    ll cnt = 0;
    for (ll i = L; i <= R; i++) {
        if (sum_of_digits(i) <= maxSum)
            cnt++;
    }
    return cnt;
}

/*
MAIN FUNCTION(data)
=============
*/
int main() {

    ll n = 12345;
    cout << "Sum of digits: " << sum_of_digits(n) << "\n";
    cout << "Divisible by 3: " << divisible_by_3(n) << "\n";
    cout << "Divisible by 4: " << divisible_by_4(n) << "\n";
    cout << "Divisible by 9: " << divisible_by_9(n) << "\n";

    cout << "Multiples of 5 in [1,100]: "
         << count_multiples(1, 100, 5) << "\n";

    return 0;
}