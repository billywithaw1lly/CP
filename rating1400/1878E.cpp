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
    int n;
    cin >> n;
    vi a(n);
    for (auto &it : a)
        cin >> it;

    int q;
    cin >> q;

    while (q--)
    {
        int l, k;
        cin >> l >> k;
        l--;

        int res = a[l];
        int ans = -1;

        if (res >= k)
            ans = l + 1;

        for (int i = l + 1; i < n; i++)
        {
            res &= a[i];
            if (res >= k)
                ans = i + 1;
            else
                break;
        }

        if (ans != -1)
            cout << ans << " ";
        else
            cout << "-1 ";
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