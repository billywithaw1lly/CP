#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastread                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);

void solve()
{
    fastread;
    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++) cin >> v[i];

    map<int, int> cnt;
    for (int i = 0; i < n; i++)
        cnt[v[i]]++;

    int ans = 0;

    for (auto &[e, f] : cnt)
    {
        ans += max(0, cnt[e] - cnt[e - 1]);
    }

    cout << ans << "\n";

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
