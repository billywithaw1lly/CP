#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

int main()
{
    fastio;

    int n, k;
    cin >> n >> k;

    vector<int> arr(n);
    for (auto &s : arr)
        cin >> s;
    vector<ll> prefix(n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        prefix[i + 1] = prefix[i] + arr[i];
    }

    ll total = 0;
    for (int i = 0; i <= n - k; i++)
    {
        total += prefix[i + k] - prefix[i];
    }

    ll weeks = n - k + 1;
    cout << fixed << setprecision(10) << (double)total / weeks << "\n";
    return 0;
}
