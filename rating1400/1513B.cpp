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
    ll n; cin >> n;
    // ll count = 0;
    // for(int i = 0; i < 60; i++){
    //     if(n & (1LL << i))
    //         count += (1LL << (i + 1)) - 1;
    // }
    // cout << count << nl;

    cout << 2 * n - __builtin_popcountll(n) << nl;

    return;
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