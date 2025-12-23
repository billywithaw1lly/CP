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
    vector<int> a(n);
    for (int &x : a)
        cin >> x;
    int total = 0;
    for (int i = 0; i + 1 < n; i++)
    {
        total += abs(a[i + 1] - a[i]);
    }

    int remo = 0;
    // remove first element
    remo = max(remo, abs(a[1] - a[0]));

    // Remove last element
    remo = max(remo, abs(a[n - 1] - a[n - 2]));

    // Remove a middle element
    for (int i = 1; i + 1 < n; i++)
    {
        int before = abs(a[i] - a[i - 1]) + abs(a[i + 1] - a[i]);
        int after = abs(a[i + 1] - a[i - 1]);
        remo = max(remo, before - after);
    }

    cout << total - remo << "\n";
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