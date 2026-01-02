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

int binsearch(int low, int high, ll target, const vll &pref)
{
    int ans = low - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (pref[mid] <= target)
        {
            ans = mid;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return ans;
}
void solve()
{
    int n; cin >> n;
    vll a(n);
    vll b(n);

    for(int i = 0; i < n; i++)
        cin >> a[i];
    for(int i = 0; i < n; i++)
        cin >> b[i];

    vll pref(n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        pref[i + 1] = pref[i] + b[i];
    }

    vll diff(n + 1, 0);
    vll leftovers(n + 1, 0);

    for(int i = 0; i < n; i++){
        ll limit = a[i] + pref[i];
        int idx = binsearch(i + 1, n, limit, pref);

        if (idx > i)
        {
            diff[i]++;
            diff[idx]--;
        }

        if (idx < n)
        {
            ll consumed = pref[idx] - pref[i];
            ll rem = a[i] - consumed;
            leftovers[idx] += rem;
        }
    }
    ll current_coupons = 0;

    for (int i = 0; i < n; i++)
    {
        current_coupons += diff[i];
        ll total_tea = (current_coupons * b[i]) + leftovers[i];
        cout << total_tea << " ";
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