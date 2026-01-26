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
using vc = vector<char>;
using vs = vector<string>;
#define pb push_back

int T;
// the failing attempt
// may the kermit bless me

const int N = 100005;
const int INF = 1e9;

void solve()
{
    int n;
    cin >> n;
    vi a(n);

    for (auto &x : a)
    {
        cin >> x;
    }
    vvi dp(n + 1, vi(2, INF));
    dp[0][0] = 0;

    for (int i = 0; i < n; i++)
    {

        if (dp[i][0] != INF)
        {
            dp[i + 1][1] = min(dp[i + 1][1], dp[i][0] + a[i]);

            if (i + 1 < n)
            {
                dp[i + 2][1] = min(dp[i + 2][1], dp[i][0] + a[i] + a[i + 1]);
            }
        }

        if (dp[i][1] != INF)
        {
            dp[i + 1][0] = min(dp[i + 1][0], dp[i][1]);

            if (i + 1 < n)
            {
                dp[i + 2][0] = min(dp[i + 2][0], dp[i][1]);
            }
        }
    }
    cout << min(dp[n][0], dp[n][1]) << nl;
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