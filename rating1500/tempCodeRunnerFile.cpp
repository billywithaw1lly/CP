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
using vc = vector<char>;
using vs = vector<string>;
#define pb push_back
int T;
// the failing attempt
// may the kermit bless me

const int N = 100005;

void solve()
{
    int n, s;
    cin >> n >> s;

    vector<int> a(n);
    for (int &x : a)
        cin >> x;

    sort(a.begin(), a.end());

    ll base_sum = 0;
    int items = 0;

    for (int i = 0; i < n; i++)
    {
        base_sum += a[i];
        int k = i + 1;

        ll add_cost = 1LL * k * k * (k + 1) / 2;
        ll total_cost = base_sum + add_cost;

        if (total_cost > s)
            break;
        items = k;
    }

    ll final_cost =
        base_sum = accumulate(a.begin(), a.begin() + items, 0LL);
    final_cost += 1LL * items * items * (items + 1) / 2;

    cout << items << " " << final_cost << nl;
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