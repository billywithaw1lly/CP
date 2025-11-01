#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr)

void solve()
{
    fastio;
    int n;
    cin >> n;

    vector<ll> arr(n);

    for (auto &it : arr)
        cin >> it;

    int val = 0;
    for (int j = 0; j < 30; j++)
    {
        int lav = 0;
        for (int i = 0; i < n; i++)
            lav += (arr[i] >> j) & 1;
        val = gcd(val, lav);
    }
    for (int i = 1; i <= (val ? val : n); i++)
        if (!val || !(val % i))
            cout << i << ' ';
    cout << endl;
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