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

    for(auto &it : a) cin >> it;

    vi dp(x + 1, 0);

    dp[0] = 1;

    for(int i = 1; i <= x; i++){
        for(int j = 0; j < n; j++){
            if(a[j] <= i){
                // dp[i] = (dp[i] + dp[i - a[j]]) % MOD; -> for one min number of coins
                dp[i] = (dp[i] + dp[i - a[j]]) % MOD;
            }
        }
    }
    //final subproblem
    cout << dp[x] << endl;

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
