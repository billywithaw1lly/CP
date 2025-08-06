#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int MOD = 998244353;

#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

ll factorial(int n)
{
    ll res = 1;
    for (int i = 2; i <= n; ++i)
    {
        res = (res * i) % MOD;
    }
    return res;
}

void solve()
{
    string s;
    cin >> s;

    int repeated = 0;
    ll lenProduct = 1;

    int cnt = 1;
    for (int i = 1; i < s.size(); ++i)
    {
        if (s[i] == s[i - 1])
        {
            cnt++;
        }
        else
        {
            if (cnt > 1)
            {
                repeated += (cnt - 1);
                lenProduct = (lenProduct * cnt) % MOD;
            }
            cnt = 1;
        }
    }

    if (cnt > 1)
    {
        repeated += (cnt - 1);
        lenProduct = (lenProduct * cnt) % MOD;
    }

    if (repeated == 0)
    {
        cout << 0 << " " << 1 << "\n";
    }
    else
    {
        ll ans2 = (factorial(repeated) * lenProduct) % MOD;
        cout << repeated << " " << ans2 << "\n";
    }
}

int main()
{
    fastio;
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
