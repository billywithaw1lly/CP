#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr)
#define nl "\n"
using vi = vector<int>;
using vvi = vector<vector<int>>;
using vii = vector<pair<int, int>>;
using vll = vector<pair<ll, ll>>;

int T;

void solve()
{
    int n;
    cin >> n;
    for (int i = n; i >= 0; --i)
    {
        int base = (1 << i) - 1;
        int step = 1 << (i + 1);
        for (int val = base; val < (1 << n); val += step)
        {
            cout << val << " ";
        }
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