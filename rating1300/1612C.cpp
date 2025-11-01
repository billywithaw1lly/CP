#include <bits/stdc++.h>
using namespace std;
using int64 = long long;

static inline int64 tri(int64 n) { return n * (n + 1) / 2; }

static inline int64 prefix(int64 m, int64 k)
{
    if (m <= k)
        return tri(m);
    int64 d = m - k;
    return tri(k) + d * k - tri(d);
}

void solve()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long k, x;
    cin >> k >> x;

    long long lo = 1, hi = 2 * k - 1, ans = hi;
    while (lo <= hi)
    {
        long long mid = (lo + hi) >> 1;
        if (prefix(mid, k) >= x)
        {
            ans = mid;
            hi = mid - 1;
        }
        else
        {
            lo = mid + 1;
        }
    }
    cout << ans << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    if (!(cin >> t))
        return 0;
    while (t--)
        solve();
    return 0;
}
