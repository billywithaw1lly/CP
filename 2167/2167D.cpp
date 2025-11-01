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
ll dp[N][3][3];

void solve()
{
    int n; cin >> n;
    vector<ll> a(n);
    for (auto &it : a) cin >> it;

    ll g = a[0];
    for (int i = 1; i < n; i++)
        g = __gcd(g, a[i]);

    if (g == 1){
        cout << 2 << "\n";
        return;
    }

    for (ll x = 2; x <= MOD; x++)
    {
        if (__gcd(x, g) == 1){
            cout << x << "\n";
            return;
        }
    }
    cout << -1 << "\n";
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
