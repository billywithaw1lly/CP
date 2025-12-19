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

    vector<string> a(n);
    for (auto &s : a) cin >> s;
    string s = a[0];

    for (int i = 1; i < n; i++){
        string s1 = a[i] + s;
        string s2 = s + a[i];
        s = min(s1, s2);
    }

    cout << s << nl;
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