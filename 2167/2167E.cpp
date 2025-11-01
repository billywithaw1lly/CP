#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define fastread                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);

using vi = vector<int>;
using vvi = vector<vector<int>>;
using vii = vector<pair<int ,int>>;
using vll = vector<pair<ll, ll>>;

const int MOD = 1000000;
const int N = 2e5 + 1;
ll dp[N][3][3];


bool can(ll d, vector<ll> &arr, ll x, ll k)
{
    ll n = arr.size();

    vll seg;
    for (auto val : arr)
    {
        ll l = max(0LL, val - d);
        ll r = min(x, val + d);
        seg.push_back({l, r});
    }
    sort(seg.begin(), seg.end());

    vll mer;
    ll L = seg[0].first, R = seg[0].second;
    for (int i = 1; i < n; i++)
    {
        if (seg[i].first <= R)
            R = max(R, seg[i].second);
        else
        {
            mer.push_back({L, R});
            L = seg[i].first;
            R = seg[i].second;
        }
    }
    mer.push_back({L, R});

    ll free_pos = 0;
    ll last = 0;
    for (auto [l, r] : mer)
    {
        if (last < l)
            free_pos += (l - last);
        last = r + 1;
    }
    if (last <= x)
        free_pos += (x - last + 1);

    return free_pos >= k;
}

void solve()
{
    ll n, k, x;
    cin >> n >> k >> x;

    vector<ll> arr(n);
    for (auto &it : arr)
        cin >> it;
    sort(arr.begin(), arr.end());

    ll low = 0, high = x, best = -1;

    while (low <= high)
    {
        ll mid = (low + high) / 2;
        if (can(mid, arr, x, k))
            best = mid, low = mid + 1;
        else
            high = mid - 1;
    }

    vll seg;

    for (auto val : arr)
    {
        ll l = max(0LL, val - best);
        ll r = min(x, val + best);
        seg.push_back({l, r});
    }
    sort(seg.begin(), seg.end());

    vll mer;
    ll L = seg[0].first, R = seg[0].second;

    for (int i = 1; i < n; i++)
    {
        if (seg[i].first <= R)
            R = max(R, seg[i].second);
        else
        {
            mer.push_back({L, R});
            L = seg[i].first;
            R = seg[i].second;
        }
    }
    mer.push_back({L, R});

    vector<ll> res;
    ll last = 0;
    for (auto [l, r] : mer){
        for (ll pos = last; pos < l && (ll)res.size() < k; pos++)
            res.push_back(pos);
        last = r + 1;
    }
    for (ll pos = last; pos <= x && (ll)res.size() < k; pos++)
        res.push_back(pos);

    for (ll pos = 0; (ll)res.size() < k && pos <= x; pos++){
        if (find(res.begin(), res.end(), pos) == res.end())
            res.push_back(pos);
    }

    sort(res.begin(), res.end());
    for (auto p : res)
        cout << p << " ";
    cout << "\n";
}

int main()
{
    fastread;
    int t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}
