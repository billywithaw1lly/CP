#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define fastread                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);

using vi = vector<int>;
using vvi = vector<vector<int>>;

const int MOD = 1e7 + 9;

ll n; string s;
const int N = 2e5 + 1;
ll dp[N][3][3];

bool DP(ll i, ll l, ll sl){
    
    if(i == n){
        if(sl == 2 && l == 0) return false;
        return true;
    }
    if(dp[i][l][sl] != -1) return dp[i][l][sl];
    ll ans = false;

    if(s[i] == '1'){
        if(sl == 2 && l == 0){
            ans = false;
            return dp[i][l][sl] = ans;
        }
        ans |= DP(i + 1, 0, l);
        return dp[i][l][sl] = ans;
    }

    if(l == 0 && sl == 2){
        ans |= DP(i + 1, 1, 0);
        return dp[i][l][sl] = ans;
    }
    if(l == 0) ans |= DP(i + 1, 2, 0);
    if(l == 1 || l == 2){
        ans |= DP(i + 1, 1, l);
        ans |= DP(i + 1, 2, l);
    }
    return dp[i][l][sl] = ans;
}



int main()
{
    fastread;
    int t; cin >> t;

    while (t--)
    {
        cin >> n;
        cin >> s;

        for (ll i = 0; i <= n; i++)
        {
            for (ll j = 0; j < 3; j++)
            {
                for (ll k = 0; k < 3; k++)
                {
                    dp[i][j][k] = -1;
                }
            }
        }
        bool check = DP(0, 1, 1);
        if (check)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
