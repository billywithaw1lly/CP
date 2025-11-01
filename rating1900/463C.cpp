#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

int main()
{
    fastio;
    int n;
    if (!(cin >> n))
        return 0;
        
    vector<vector<ll>> a(n, vector<ll>(n));
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            cin >> a[i][j];
    int M = 2 * n - 1;
    vector<ll> diag1(M, 0), diag2(M, 0);

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            diag1[i + j] += a[i][j];
            diag2[i - j + (n - 1)] += a[i][j];
        }
    }

    ll bestVal[2] = {LLONG_MIN, LLONG_MIN};
    pair<int, int> bestPos[2] = {{1, 1}, {1, 1}};

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            ll cur = diag1[i + j] + diag2[i - j + (n - 1)] - a[i][j];
            int p = (i + j) & 1;
            if (cur > bestVal[p])
            {
                bestVal[p] = cur;
                bestPos[p] = {i + 1, j + 1};
            }
        }
    }

    ll total = bestVal[0] + bestVal[1];
    cout << total << "\n";
    cout << bestPos[0].first << " " << bestPos[0].second << " " << bestPos[1].first << " " << bestPos[1].second << "\n";

    return 0;
}