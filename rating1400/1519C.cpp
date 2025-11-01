#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr)

void solve()
{
    int n;
    cin >> n;

    vector<pair<int, ll>> details(n);
    for (int i = 0; i < n; i++)
        cin >> details[i].first;
    for (int i = 0; i < n; i++)
        cin >> details[i].second;

    unordered_map<int, vector<ll>> teamStrengths;
    for (auto &p : details)
    {
        teamStrengths[p.first].push_back(p.second);
    }

    vector<ll> ans(n + 1, 0);

    for (auto &kv : teamStrengths)
    {
        auto &players = kv.second;
        sort(players.rbegin(), players.rend());

        int m = players.size();
        vector<ll> pref(m + 1, 0);
        for (int i = 0; i < m; i++)
            pref[i + 1] = pref[i] + players[i];

        for (int k = 1; k <= m; k++)
        {
            int usable = m - (m % k);
            ans[k] += pref[usable];
        }
    }

    for (int k = 1; k <= n; k++)
    {
        cout << ans[k] << " ";
    }
    cout << "\n";

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