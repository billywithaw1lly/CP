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
    vector<ll> a(n);
    for (auto &it : a) cin >> it;

    sort(a.begin(), a.end());

    ll m1 = a[0];
    ll m2 = a[1];

    if (m2 > 2 * m1)
    {
        cout << m2 - m1 << "\n";
    }
    else
    {
        cout << m1 << "\n";
    }
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


// if you are reading this i actively use comment and dont use AI, these are for my own better understanding