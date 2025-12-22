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
    int n, q;
    cin >> n >> q;
    vi a(n);
    for (auto &it : a)
        cin >> it;

    vector<int> pref0(n + 1, 0), pref1(n + 1, 0), same(n + 1, 0);

    for (int i = 0; i < n; i++)
    {
        pref0[i + 1] = pref0[i];
        pref1[i + 1] = pref1[i];
        if (a[i] == 0)
            pref0[i + 1]++;
        else
            pref1[i + 1]++;

        if (i > 0)
            same[i + 1] = same[i] + (a[i] == a[i - 1]);
        else
            same[i + 1] = 0;
    }

    while (q--)
    {
        int q1, q2;
        cin >> q1 >> q2;

        if ((q2 - q1 + 1) % 3 != 0)
        {
            cout << -1 << nl;
            continue;
        }

        int zero = pref0[q2] - pref0[q1 - 1];
        int one = pref1[q2] - pref1[q1 - 1];

        if (zero % 3 != 0 || one % 3 != 0)
        {
            cout << -1 << nl;
            continue;
        }

        bool present = (same[q2] - same[q1] > 0);

        if (present)
        {
            cout << (q2 - q1 + 1) / 3 << nl;
        }
        else
        {
            cout << 2 + ((q2 - q1 - 2) / 3) << nl;
        }
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