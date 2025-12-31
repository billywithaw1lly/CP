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
const int MAXN = 100005;
// the failing attempt
// may the kermit bless me

void solve()
{
    int n;
    cin >> n;
    vpii a(n);

    for (auto &s : a)
        cin >> s.first >> s.second;

    if (n == 1)
    {
        cout << 1 << nl;
        return;
    }
    int ans = 2;

    int prev = a[0].first;

    for (int i = 1; i < n - 1; i++)
    {
        int x = a[i].first;
        int h = a[i].second;
        int next = a[i + 1].first;

        if (x - h > prev)
        {
            ans++;
            prev = x;
        }
        else if (x + h < next)
        {
            ans++;
            prev = x + h;
        }
        else
        {
            prev = x;
        }
    }
    cout << ans << nl;
}

int main()
{
    fastio;
    int t = 1;
    // cin >> t;

    for (T = 1; T <= t; T++)
    {
        solve();
    }

    return 0;
}