#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr)

int main()
{
    fastio;
    int n;
    cin >> n;
    vector<ll> a(n);

    ll maxVal = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        maxVal = max(maxVal, a[i]);
    }

    vector<ll> freq(maxVal + 1, 0);
    for (ll x : a)
        freq[x]++;

    vector<ll> dp(maxVal + 1, 0);
    dp[0] = 0;
    dp[1] = freq[1] * 1;

    for (ll i = 2; i <= maxVal; i++)
    {
        dp[i] = max(dp[i - 1], dp[i - 2] + freq[i] * i);
    }

    cout << dp[maxVal] << "\n";
    return 0;
}