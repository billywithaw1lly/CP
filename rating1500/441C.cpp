#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

int main()
{
    fastio;
    ll n, m, k;
    cin >> n >> m >> k;

    vector<pair<int, int>> cells;
    cells.reserve(n * m);

    for (int r = 1; r <= n; ++r)
    {
        if (r % 2 == 1)
        {
            for (int c = 1; c <= m; ++c)
                cells.emplace_back(r, c);
        }
        else
        {
            for (int c = m; c >= 1; --c)
                cells.emplace_back(r, c);
        }
    }

    int idx = 0;
    for (int group = 1; group <= k - 1; ++group)
    {
        cout << 2 << " ";
        cout << cells[idx].first << " " << cells[idx].second << " ";
        cout << cells[idx + 1].first << " " << cells[idx + 1].second << "\n";
        idx += 2;
    }

    int rem = (int)cells.size() - idx;
    cout << rem;
    for (; idx < (int)cells.size(); ++idx)
        cout << " " << cells[idx].first << " " << cells[idx].second;
    cout << "\n";

    return 0;
}
