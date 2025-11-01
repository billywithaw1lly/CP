#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
using vi = vector<int>;

#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr)

const int MOD = 1000000007;
void solve()
{
    fastio;
    int n, x;
    cin >> n >> x;

    vi a(n);

    for (auto &it : a)
        cin >> it;

    vector<vi> dp(n + 1, vi (x + 1));

    for(int i = 0; i < n; i++){
        dp[i][0] = 1;
    }

    for (int i = n - 1; i >= 0; i--)
    {
        for (int k = 1; k <= x; k++)
        {
            int skip = dp[i + 1][k];
            int pick = 0;
            if (a[i] <= k)
            {
                pick = dp[i][k - a[i]];
            }
            dp[i][k] = (pick + skip) % MOD;
        }
    }
    // final subproblem
    cout << dp[0][x] << endl;

    return;
}

int main()
{

    fastio;
    int t;
    t = 1;

    while (t--)
        solve();

    return 0;
}
