#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve()
{
    ll n, k, x;
    cin >> n >> k >> x;
    vector<ll> arr(n);
    ll sum = 0;

    for (int i = 0; i < n; i++)
        cin >> arr[i], sum += arr[i];

    if (sum * k < x)
    {
        cout << "0\n";
        return;
    }

    ll q = x / sum, r = x % sum;

    ll cnt = q * n, i = n - 1;

    while (r > 0 && i >= 0)
        r -= arr[i--], cnt++;

    ll res = n * k - cnt + 1;
    
    cout << res << '\n';
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}