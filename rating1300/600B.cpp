#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

ll lower_bound_sum(const vector<ll> &arr, ll i, ll target)
{
    ll low = i + 1, high = arr.size() - 1, ans = arr.size();
    while (low <= high)
    {
        ll mid = (low + high) / 2;
        if (arr[i] + arr[mid] >= target)
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}

ll upper_bound_sum(const vector<ll> &arr, ll i, ll target)
{
    ll low = i + 1, high = arr.size() - 1, ans = i;
    while (low <= high)
    {
        ll mid = (low + high) / 2;
        if (arr[i] + arr[mid] <= target)
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
    ll n, l, r;
    cin >> n >> l >> r;

    vector<ll> arr(n);
    for (ll i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr.begin(), arr.end());

    ll count = 0;
    for (ll i = 0; i < n; i++)
    {
        ll lo = lower_bound_sum(arr, i, l);
        ll hi = upper_bound_sum(arr, i, r);
        if (hi >= lo)
            count += (hi - lo + 1);
    }

    cout << count << "\n";
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
