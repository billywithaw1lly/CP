#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr)

void solve()
{
    fastio;
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
        cin >> a[i];
    if (k >= 3)
    {
        cout << 0 << endl;
        return;
    }
    sort(begin(a), end(a));
    
    ll d = a[0];
    for (ll i = 0; i < n - 1; i++)
        d = min(d, a[i + 1] - a[i]);
    if (k == 1)
    {
        cout << d << endl;
        return;
    }
    for (ll i = 0; i < n; i++)
        for (ll j = 0; j < i; j++)
        {
            ll v = a[i] - a[j];
            ll p = lower_bound(begin(a), end(a), v) - begin(a);
            if (p < n)
                d = min(d, a[p] - v);
            if (p > 0)
                d = min(d, v - a[p - 1]);
        }
    cout << d << endl;

    return;
}

int main()
{
    fastio;
    int t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}