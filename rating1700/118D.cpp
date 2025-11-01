#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
using vi = vector<int>;


#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr)

const int MOD = 100000000;
const int MAXN = 100005;

vector<int> pref(MAXN);
int dp[105][105][2];

int main()
{
    fastio;

    int n1, n2, k1, k2;
    cin >> n1 >> n2 >> k1 >> k2;

    dp[0][0][0] = dp[0][0][1] = 1;

    for (int i = 0; i <= n1; i++)
    {
        for (int j = 0; j <= n2; j++)
        {
            // End with footmen
            for (int cnt = 1; cnt <= k1 && i - cnt >= 0; cnt++)
                dp[i][j][0] = (dp[i][j][0] + dp[i - cnt][j][1]) % MOD;

            // End with horsemen
            for (int cnt = 1; cnt <= k2 && j - cnt >= 0; cnt++)
                dp[i][j][1] = (dp[i][j][1] + dp[i][j - cnt][0]) % MOD;
        }
    }

    cout << (dp[n1][n2][0] + dp[n1][n2][1]) % MOD << "\n";
    return 0;
}