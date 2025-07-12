#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastread                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);

void solve()
{
    ll n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    if (a[n - 2] > a[n - 1])
    {
        cout << -1 << endl;
    }
    else
    {
        if (a[n - 1] < 0)
        {
            if (is_sorted(a.begin(), a.end()))
            {
                cout << 0 << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
        else
        {
            cout << n - 2 << endl;
            for (int i = 1; i <= n - 2; ++i)
            {
                cout << i << ' ' << n - 1 << ' ' << n << endl;
            }
        }
    }
}

int main()
{
    fastread;
    ll t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
