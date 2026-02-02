#include <bits/stdc++.h>
#define ll long long
using namespace std;
// sieve // Return primes Numbers of the Query and Number //
vector<int> sieve(int num)
{
    vector<bool> isPrime(num + 1, true);

    if (num >= 0) isPrime[0] = false;
    if (num >= 1) isPrime[1] = false;

    for (int i = 2; i <= num; ++i)
    {
        if (isPrime[i])
        {
            for (int j = 2 * i; j <= num; j += i)
            {
                isPrime[j] = false;
            }
        }
    }

    vector<int> primes;
    for (int i = 2; i <= num; i++)
    {
        if (isPrime[i])
            primes.push_back(i);
    }

    return primes;
}

int main()
{
    int q;
    cin >> q;
    while (q--)
    {
       number;
        vector<int> primes = sieve(num);

        for(int p : primes)
        // printing P ??
    }