#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
using vi = vector<int>;

#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr)

const int MOD = 1000000007;
const int MAXN = 100005;

vector<int> pref(MAXN);
int dp[1000001];

int rec(int sum)
{
    if (sum == 0)
        return 1;
    if (dp[sum] != -1)
        return dp[sum];

    int ans = 0;
    for (int i = 1; i <= 6; i++)
    {
        if (sum - i >= 0)
            ans = (ans + rec(sum - i)) % MOD;
    }
    return dp[sum] = ans;
}


int main()
{
    fastio;

    int n;
    cin >> n;
    for (int i = 0; i <= n; i++)
        dp[i] = -1;
    cout << rec(n) << endl;
}