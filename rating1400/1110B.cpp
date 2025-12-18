#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr)
#define nl "\n"
using vi = vector<int>;
using vvi = vector<vector<int>>;
using vii = vector<pair<int, int>>;
using vll = vector<pair<ll, ll>>;

int T;

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;

    vi a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    vi diff(n - 1);
    for (int i = 0; i < n - 1; i++)
    {
        diff[i] = a[i + 1] - a[i] - 1;
    }
    sort(diff.begin(), diff.end());

    int ans = n;
    for (int i = 0; i < n - k; i++)
    {
        ans += diff[i];
    }

    cout << ans << nl;
}

int main()
{
    fastio;
    int t = 1;
    //cin >> t;

    for (T = 1; T <= t; T++)
    {
        solve();
    }

    return 0;
}