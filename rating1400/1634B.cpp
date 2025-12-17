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
    ll n;
    cin >> n;

    ll x, y;
    cin >> x >> y;

    ll sum = 0;
    vector<ll> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
        sum += a[i];
    }

    if ((sum + x + y) % 2 == 0)
        cout << "Alice\n";
    else
        cout << "Bob\n";

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