#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
using vi = vector<int>;

#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr)

const int MOD = 1000000007;
void solve()
{
    fastio;
    int n; cin >> n;
    string grid[n][n];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++)
        cin >> grid[i][j];
    }
}

int main()
{
    fastio;
    int t = 1;
    while (t--)
        solve();
    return 0;
}