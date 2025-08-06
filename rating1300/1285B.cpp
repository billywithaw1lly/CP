#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += v[i];
        if (sum <= 0)
        {
            cout << "NO\n";
            return;
        }
    }
    sum = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        sum += v[i];
        if (sum <= 0)
        {
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";
}

int main()
{
    fastio;
    int t;
    cin >> t;

    while (t--)
        solve();
    return 0;
}
