#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define fastread                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);

using vi = vector<int>;
using vvi = vector<vector<int>>;

const int MOD = 1e7 + 9;
const int N = 2e5 + 1;
ll dp[N][3][3];

void solve()
{
    int n, k;
    cin >> n >> k;

    vi arr(n);
    for (auto &it : arr)
        cin >> it;

    sort(arr.begin(), arr.end());
    map<ll, ll> mp;
    for (auto &num : arr)
        mp[num]++;

    for (int i = n; i >= 2; i--)
    {
        ll nxt = n - (lower_bound(arr.begin(), arr.end(), 4 * i) - arr.begin());
        ll others = mp[i] + mp[2 * i] + mp[3 * i];

        if (n - nxt - others <= k)
        {
            cout << i << "\n";
            return;
        }
    }

    cout << 1 << "\n";
    return;
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
