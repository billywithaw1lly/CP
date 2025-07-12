#include <bits/stdc++.h>
using namespace std;

#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

void solve()
{
    int n;
    cin >> n;
    int p = 0;

    for (int m = 2; m <= 100000; m++)
    {
        if (n % m == 0)
        {
            p = m;
            break;
        }
    }

    if (p == 0)
    {
        p = n;
    }

    cout << n / p << " " << n - (n / p) << "\n";
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
