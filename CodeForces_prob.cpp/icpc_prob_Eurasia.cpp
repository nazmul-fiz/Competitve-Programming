#define e4 int main()
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a / gcd(a, b) * b)
#define checkmate return 0;
#define UNDEFINED 0x3f
#define INF LLONG_MAX
#define in_range(i, x, y) for (int i = x; i <= y; i++)
#define in_range_back(i, x, y) for (int i = y; i >= x; i--)
#define ll long long
using namespace std;

int main()
{
    int n;
    ll m;
    cin >> n >> m;
    vector<string> s(n);
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }

    vector<ll> Tfreq(26, 0);
    vector<vector<ll>> freq(n, vector<ll>(26, 0));

    for (int i = 0; i < n; i++)
    {
        for (char c : s[i])
        {
            freq[i][c - 'A']++;
            Tfreq[c - 'A']++;
        }
    }

    for (int l = 0; l < n; l++)
    {
        ll ans = -1;
        bool imp = false;

        // check if k is possible
        auto ok = [&](ll k)
        {
            for (int c = 0; c < 26; c++)
            {
                ll lef = Tfreq[c];
                ll ri = freq[l][c];
                ll ex = lef - ri;

                ll ache = ex * m;
                ll need = k * ex + ri;

                if (need > ache)
                    return false;
            }
            return true;
        };

        // if even k = 0 is impossible
        if (!ok(0))
        {
            cout << "-1 ";
            continue;
        }

        ll lo = 0, hi = m;
        while (lo <= hi)
        {
            ll mid = (lo + hi) / 2;
            if (ok(mid))
            {
                ans = mid;
                lo = mid + 1;
            }
            else
            {
                hi = mid - 1;
            }
        }

        cout << ans << " ";
    }

    cout << endl;

    checkmate
}
