#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

void solve()
{
    ll n;
    cin >> n;

    vector<pair<ll, ll>> tasks(n);
    for (ll i = 0; i < n; ++i) {
        cin >> tasks[i].first;
        tasks[i].second = i + 1;
    }

    sort(tasks.rbegin(), tasks.rend());

    vector<ll> position(n + 1);
    ll pos = 1, beauty = 0;

    for (ll i = 0; i < n; ++i) {
        ll idx = tasks[i].second;
        ll assign = (i % 2 == 0) ? pos : -pos;

        position[idx] = assign;
        beauty += 2 * tasks[i].first * abs(assign);

        if (i % 2 == 1) pos++;
    }

    cout << beauty << "\n";
    for (ll i = 0; i <= n; ++i)
        cout << position[i] << " ";
    cout << "\n";
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}