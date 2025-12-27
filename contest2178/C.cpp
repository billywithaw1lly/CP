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
    int n;
    if (!(cin >> n))
        return;

    vll a(n);
    ll sum = 0;

    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        if (i > 0)
            sum += a[i];
    }
    if (n == 1)
    {
        cout << 0 << "\n";
        return;
    }

    ll best = a[n - 1];

    for (int i = n - 2; i >= 1; --i)
    {
        best = max({best, a[i], best + 2 * a[i]});
    }
    ll ans = -sum + max(0LL, a[0] + best);
    cout << ans << nl;
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