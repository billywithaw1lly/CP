#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fastio               \
    ios::sync_with_stdio(0); \
    cin.tie(0)

void solve()
{
    int n, m;
    cin >> n >> m;

    vector<int> f(n);
    vector<int> p(m);

    for (auto &s : f)
        cin >> s;

    sort(f.rbegin(), f.rend());

    for (auto &s : p)
        cin >> s;

    ll ans = 0;
    int j = 0;

    for (int i = 0; i < n; i++)
    {
        if (j == m)
        {
            ans += p[f[i] - 1];
        }
        else if (f[i] - 1 >= m)
        {
            ans += p[j++];
        }
        else if (p[j] < p[f[i] - 1])
        {
            ans += p[j++];
        }
        else
        {
            ans += p[f[i] - 1];
        }
    }

    cout << ans << '\n';
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
