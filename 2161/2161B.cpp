#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define fastread                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);

using vi = vector<int>;
using vvi = vector<vector<int>>;
using vii = vector<pair<int, int>>;
using vll = vector<pair<ll, ll>>;

const int MOD = 1000000;
const int N = 2e5 + 1;
ll dp[N][3][3];

void solve()
{
    int n;
    cin >> n;
    vector<vector<char>> s(n, vector<char>(n));
    vii blacks;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            cin >> s[i][j];
            if (s[i][j] == '#')
                blacks.push_back({i, j});
        }

    if (blacks.empty())
    {
        cout << "NO\n";
        return;
    }

    // Ensure connectivity (4-directional)
    queue<pair<int, int>> q;
    set<pair<int, int>> vis;

    q.push(blacks[0]);
    vis.insert(blacks[0]);

    int dirs[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
    while (!q.empty())
    {
        auto [x, y] = q.front();
        q.pop();
        for (auto &d : dirs)
        {
            int nx = x + d[0], ny = y + d[1];
            if (nx >= 0 && ny >= 0 && nx < n && ny < n && s[nx][ny] == '#' && !vis.count({nx, ny}))
            {
                vis.insert({nx, ny});
                q.push({nx, ny});
            }
        }
    }

    if (vis.size() != blacks.size())
    {
        cout << "NO\n";
        return;
    }

    // Check Manhattan distance rule between every pair of adjacent blacks (possible stair connections)
    for (int i = 0; i < (int)blacks.size(); i++)
    {
        for (int j = i + 1; j < (int)blacks.size(); j++)
        {
            int dx = abs(blacks[i].first - blacks[j].first);
            int dy = abs(blacks[i].second - blacks[j].second);

            if (dx + dy == 1)
                continue; // direct neighbors are fine

            // Manhattan stair rule:
            bool ok = false;
            if (dx == dy)
                ok = true; // diagonal-like step
            else if ((dx % 2 == 1 && dy == 0) || (dy % 2 == 1 && dx == 0))
                ok = true;

            if (!ok)
            {
                cout << "NO\n";
                return;
            }
        }
    }

    for (int i = 0; i < n; i++)
        for (int j = 0; j + 2 < n; j++)
            if (s[i][j] == '#' && s[i][j + 1] == '#' && s[i][j + 2] == '#')
            {
                cout << "NO\n";
                return;
            }

    for (int j = 0; j < n; j++)
        for (int i = 0; i + 2 < n; i++)
            if (s[i][j] == '#' && s[i + 1][j] == '#' && s[i + 2][j] == '#')
            {
                cout << "NO\n";
                return;
            }

    cout << "YES\n";
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
