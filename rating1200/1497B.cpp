#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define fastread                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);

void solve()
{
    fastread;
    int n, m; cin>>n>>m;
    map<int, int> cnt;
    while (n--)
    {
        int x;
        cin >> x;
        cnt[x % m]++;
    }
    int ans = 0;
    for (auto &c : cnt)
    {
        if (c.first == 0)
            ans++;
        else if (2 * c.first == m)
        {
            ans++;
        }
        else if (2 * c.first < m || cnt.find(m - c.first) == cnt.end())
        {
            int x = c.second, y = cnt[m - c.first];
            ans += 1 + max(0, abs(x - y) - 1);
        }
    }
    cout << ans << '\n';
    return;
}

int main()
{
    fastread;
    ll t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}
