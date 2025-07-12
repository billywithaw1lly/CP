#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define fastread                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);

void solve()
{
    ll n, k;
    cin >> n >> k;

    ll ans = n;

    for (int j = 1; j * j <= n; j++)
    {
        if (n % j == 0)
        {
            if (j <= k)
            {
                ans = min(ans, n / j);
            }

            if (n / j <= k)
            {
                ans = min(ans, ll(j));
            }
        }
    }

    cout << ans << endl;
}

int main()
{
    fastread;
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
