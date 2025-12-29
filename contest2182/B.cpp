#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr)
#define nl "\n"
using vi = vector<int>;
using vll = vector<long long>;
using vvi = vector<vector<int>>;
using vpii = vector<pair<int, int>>;
using vpll = vector<pair<ll, ll>>;
#define pb push_back
int T;
// the failing attempt
// may the kermit bless me

void solve()
{
    ll a, b;
    cin >> a >> b;

    auto height = [&](ll odd, ll even) -> int
    {
        int a1 = 0;
        if (odd >= 1)
        {
            a1 = floor(log(3.0 * odd + 1) / log(4.0));
        }
        int a2 = 0;
        if (even >= 2)
        {
            a2 = floor(log(1.5 * even + 1) / log(4.0));
        }

        if (a1 > a2)
        {
            return 2 * a2 + 1;
        }
        else
        {
            return 2 * a1;
        }
    };
    int h1 = height(a, b);
    int h2 = height(b, a);

    cout << max(h1, h2) << nl;
}
int main()
{
    fastio;
    int t;
    cin >> t;

    for (T = 1; T <= t; T++)
    {
        solve();
    }

    return 0;
}