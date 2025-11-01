#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define fastread                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);

using vi = vector<int>;
using vvi = vector<vector<int>>;
using vii = vector<pair<int, int>>;
using vll = vector<pair<ll, ll>>;

const int MOD = 1000000;
const int N = 2e5 + 1;
ll dp[N][3][3];

void solve()
{
    int r, x , d, n;
    cin >> r >> x >> d >> n;
    string s; cin >> s;
    int ans = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == '1'){
            if(r >= x)
            r -= d;
            ans++;
        } else {
            if(r < x) ans++;
        }
    }
    cout << ans;
    cout << "\n";
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
