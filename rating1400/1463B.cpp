#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr)
#define nl "\n"
using vi = vector<int>;
using vll = vector<long long>;
using vvi = vector<vector<int>>;
using vpii = vector<pair<int, int>>;
using vpll = vector<pair<ll, ll>>;
#define pb push_back

int T;

// the failing attempt
// may the kermit bless me
void solve()
{
    int n;
    cin >> n;

    vector<ll> a(n);
    ll S = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        S += a[i];
    }

    vector<ll> b1(n), b2(n);
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            b1[i] = a[i];
            b2[i] = 1;
        }
        else
        {
            b1[i] = 1;
            b2[i] = a[i];
        }
    }

    ll D1 = 0, D2 = 0;
    for (int i = 0; i < n; i++)
    {
        D1 += llabs(a[i] - b1[i]);
        D2 += llabs(a[i] - b2[i]);
    }
    if (2 * D1 <= S)
    {
        for (ll x : b1)
            cout << x << " ";
    }
    else
    {
        for (ll x : b2)
            cout << x << " ";
    }
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