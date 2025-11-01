#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define fastread                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);

using vi = vector<int>;
using vvi = vector<vector<int>>;

const int MOD = 1000000;
const int N = 2e5 + 1;
// ll dp[N][3][3];

void solve()
{
    int n;
    cin >> n;
    vector<ll> a(n), c(n);

    for (auto &x : a) cin >> x;
    for (auto &x : c) cin >> x;

    vector<ll> dp(n);
    ll total = accumulate(c.begin(), c.end(), 0LL);
    ll ans = 0;

    for (int i = 0; i < n; i++)
    {
        dp[i] = c[i];
        for (int j = 0; j < i; j++)
        {
            if (a[j] <= a[i])
                dp[i] = max(dp[i], dp[j] + c[i]);
        }
        ans = max(ans, dp[i]);
    }

    cout << total - ans << "\n";
    return;
}

int main()
{
    fastread;
    int t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}
