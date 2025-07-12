#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define fastread                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);

void solve()
{
    fastread;
    int n, k;
    cin >> n >> k;
    k--;
    cout << (k + (n % 2) * k / (n / 2)) % n + 1 << endl;
    return;
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
