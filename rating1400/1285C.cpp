#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr)
#define nl "\n"
using vi = vector<int>;
using vvi = vector<vector<int>>;
using vii = vector<pair<int, int>>;
using vll = vector<pair<ll, ll>>;

int T;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll x;
    cin >> x;

    ll best = x;
    ll A = 1, B = x;

    for (ll d = 1; d * d <= x; d++)
    {
        if (x % d == 0)
        {
            ll e = x / d;
            if (gcd(d, e) == 1)
            {
                ll cur = max(d, e);
                if (cur < best)
                {
                    best = cur;
                    A = d;
                    B = e;
                }
            }
        }
    }

    cout << A << " " << B << "\n";
    return 0;
}