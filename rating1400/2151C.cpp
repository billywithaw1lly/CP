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
    ll n;
    cin >> n;
    vector<ll> v;
    for (ll i = 0; i < 2 * n; i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
    }

    vector<ll> ans(n + 3, 0);
    for (ll i = 0; i < 2 * n; i += 2)
        ans[1] -= v[i];
    for (ll i = 1; i < 2 * n; i += 2)
    {
        ans[1] += v[i];
        ans[2] -= v[i];
    }
    for (ll i = 2; i < 2 * n; i += 2)
        ans[2] += v[i];
    ans[2] += 2 * v.back() - v[0];

    for (ll i = 3; i <= n; i++)
    {
        ans[i] = ans[i - 2] + 2 * (v[(ll)v.size() - i + 1] - v[i - 2]);
    }

    for (ll i = 1; i <= n; i++)
        cout << ans[i] << ' ';
    cout << nl;
}

int main()
{
    fastio;
    int t;
    cin >> t;

    for (T = 1; T <= t; T++)
    {
        solve();
    }

    return 0;
}