#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr)

ll count_factor(ll x, ll f)
{
    ll cnt = 0;
    while (x % f == 0 && x > 0)
    {
        cnt++;
        x /= f;
    }
    return cnt;
}

void solve()
{
    fastio;
    ll n, m;
    cin >> n >> m;

    ll c2 = count_factor(n, 2);
    ll c5 = count_factor(n, 5);

    ll k = 1;

    while (c2 < c5 && k * 2 <= m)
    {
        k *= 2;
        c2++;
    }
    while (c5 < c2 && k * 5 <= m)
    {
        k *= 5;
        c5++;
    }
    while (k * 10 <= m)
    {
        k *= 10;
        c2++;
        c5++;
    }
    k *= (m / k);

    cout << n * k << "\n";
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