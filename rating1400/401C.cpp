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
    cin >> n >> m;

    if (m < n - 1)
    {
        cout << -1 << nl;
        return;
    }
    if (m > 2 * (n + 1))
    {
        cout << -1 << nl;
        return;
    }
    if (m == n - 1)
    {
        cout << "0";
        for (int i = 0; i < m; i++)
            cout << "10";
        cout << nl;
        return;
    }
    while (n > 0)
    {
        if (m > n)
        {
            cout << "11";
            m -= 2;
        }
        else
        {
            cout << "1";
            m--;
        }
        cout << "0";
        n--;
    }

    while (m > 0)
    {
        cout << "1";
        m--;
    }
    cout << nl;
}
int main()
{
    fastio;
    int t = 1;
    //cin >> t;

    for (T = 1; T <= t; T++)
    {
        solve();
    }

    return 0;
}