#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

void solve()
{
    int n, x, y;
    cin >> n >> x >> y;

    vector<pair<int, int>> res(n);
    for (int i = 0; i < n; i++)
    {
        ll v;
        cin >> v;
        res[i].first = v % y;
        res[i].second = v % x;
    }

    sort(res.begin(), res.end());

    ll ans = 0;
    int i = 0;
    while (i < n)
    {
        int j = i + 1;
        while (j < n && res[j].first == res[i].first)
            ++j;

        vector<int> r2s;
        r2s.reserve(j - i);
        for (int k = i; k < j; ++k)
            r2s.push_back(res[k].second);

        ll zeros = 0;
        for (int v : r2s)
            if (v == 0)
                ++zeros;
        ans += zeros * (zeros - 1) / 2;

        sort(r2s.begin(), r2s.end());
        int L = 0, R = (int)r2s.size() - 1;
        while (L < R)
        {
            int sum = r2s[L] + r2s[R];
            if (sum < x)
            {
                ++L;
            }
            else if (sum > x)
            {
                --R;
            }
            else
            {
                if (r2s[L] == r2s[R])
                {
                    ll cnt = R - L + 1;
                    ans += cnt * (cnt - 1) / 2;
                    break;
                }
                ll cL = 1, cR = 1;
                while (L + 1 < R && r2s[L + 1] == r2s[L])
                {
                    ++cL;
                    ++L;
                }
                while (R - 1 > L && r2s[R - 1] == r2s[R])
                {
                    ++cR;
                    --R;
                }
                ans += cL * cR;
                ++L;
                --R;
            }
        }

        i = j;
    }

    cout << ans << "\n";
}

int main()
{
    fastio;
    int T;
    cin >> T;
    while (T--)
        solve();
    return 0;
}

