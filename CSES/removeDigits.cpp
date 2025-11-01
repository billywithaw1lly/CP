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
    int n; cin >> n;
    vi dp(n + 1, 1e9);
    dp[0] = 0;

    for( int i = 1; i <= n; i++){
        string a = to_string(i);
        for(char c : a){
            int digit = c - '0';
            if(digit != 0){
                dp[i] = min(dp[i], dp[i - digit] + 1);
            }
        }
    }


    cout << dp[n] << '\n';
}

int main()
{
    fastio;
    int t = 1;
    while (t--)
        solve();
    return 0;
}