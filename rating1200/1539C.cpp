#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define fastread                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);

int main()
{
    fastread;
    ll n, k, x;
    cin >> n >> k >> x;
    vector<ll> a(n);
    for (auto &s : a)
        cin >> s;

    sort(a.begin(), a.end());
    vector<ll> required_ops;
    for (int i = 0; i < n - 1; i++)
    {
        ll diff = a[i + 1] - a[i];
        if (diff > x)
        {
            required_ops.push_back((diff - 1) / x);
        }
    }
    sort(required_ops.begin(), required_ops.end());
    ll groups = required_ops.size() + 1;
    for (auto ops : required_ops)
    {
        if (k >= ops)
        {
            k -= ops;
            groups--;
        }
        else break;
    }
    cout << groups << '\n';
    return 0;
}
