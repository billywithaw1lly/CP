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
    ll n, m, k;
    cin >> n >> m >> k;
    ll ans = 0;

    multiset<ll> box;
    for (int i = 0; i < m; i++)
    {
        ll b;
        cin >> b;
        box.insert(b);
    }
    ll basicCost = 0;

    struct Friend
    {
        ll beauty_req;
        ll upgrade_cost;
        bool satisfied = false;
    };

    vector<Friend> a(n);
    for (int i = 0; i < n; i++)
    {
        ll x, y, z;
        cin >> x >> y >> z;
        a[i].beauty_req = x;
        a[i].upgrade_cost = z - y;
        basicCost += y;
    }

    if (basicCost > k)
    {
        cout << 0 << nl;
        return;
    }
    k -= basicCost;

    sort(a.begin(), a.end(), [](const Friend &f1, const Friend &f2)
        { return f1.upgrade_cost > f2.upgrade_cost; });

    for (int i = 0; i < n; i++)
    {
        auto it = box.lower_bound(a[i].beauty_req);
        if (it != box.end())
        {
            ans++;
            a[i].satisfied = true;
            box.erase(it);
        }
    }

    vector<ll> remaining_upgrades;
    for (int i = 0; i < n; i++)
    {
        if (!a[i].satisfied)
        {
            remaining_upgrades.push_back(a[i].upgrade_cost);
        }
    }
    sort(remaining_upgrades.begin(), remaining_upgrades.end());
    for (ll cost : remaining_upgrades)
    {
        if (k >= cost)
        {
            k -= cost;
            ans++;
        }
        else
        {
            break;
        }
    }

    cout << ans << nl;
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