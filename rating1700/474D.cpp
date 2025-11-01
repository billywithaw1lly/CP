#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr)

const int MOD = 1000000007;
const int MAXN = 100005;

vector<int> dp(MAXN);
vector<int> pref(MAXN);

void preComp(int k)
{
    dp[0] = 1;

    for (int i = 1; i < MAXN; i++)
    {
        dp[i] = dp[i - 1];
        if (i >= k)
            dp[i] = (dp[i] + dp[i - k]) % MOD;
    }

    pref[0] = dp[0];
    for (int i = 1; i < MAXN; i++)
    {
        pref[i] = (pref[i - 1] + dp[i]) % MOD;
    }
}

void solve()
{
    int a, b;
    cin >> a >> b;

    int ans = (pref[b] - (a > 0 ? pref[a - 1] : 0) + MOD) % MOD;
    cout << ans << "\n";
}

int main()
{
    fastio;

    int t, k;
    cin >> t >> k;

    preComp(k);
    while (t--)
        solve();

    return 0;
}
