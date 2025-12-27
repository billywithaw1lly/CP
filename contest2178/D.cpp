// codeforces inflation is for real

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
    int n, m;
    if (!(cin >> n >> m))
        return;

    vpll a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first;
        a[i].second = i + 1;
    }

    sort(a.begin(), a.end());

    vpii moves;

    if (m == 0)
    {
        ll sum_others = 0;
        for (int i = 0; i < n - 1; i++)
            sum_others += a[i].first;

        if (sum_others < a[n - 1].first)
        {
            cout << -1 << nl;
            return;
        }
        for (int i = 0; i < n - 1; i++)
        {
            moves.pb({a[i].second, a[n - 1].second});
        }
    }
    else
    {
        if (n < 2 * m)
        {
            cout << -1 << nl;
            return;
        }
        int s = n - 2 * m;
        for (int i = 0; i < s; i++)
        {
            moves.pb({a[i + 1].second, a[i].second});
        }
        moves.pb({a[n - 1].second, a[s].second});

        for (int i = 0; i < m - 1; i++)
        {
            int alive = a[n - m + i].second;
            int ded = a[n - 2 * m + 1 + i].second;
            moves.pb({alive, ded});
        }
    }

    cout << moves.size() << nl;
    for (auto &p : moves)
    {
        cout << p.first << " " << p.second << nl;
    }
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