#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr)

void solve()
{
    ll n, k;
    cin >> n >> k;

    vector<ll> arr(n);
    for (auto &it : arr)
        cin >> it;

    vector<int> good(n, 0);
    vector<ll> pre(n);

    for(int i = 1; i < n; i++){
        if(arr[i] * 2 > arr[i - 1]) good[i] = 1;
    }

    pre[0] = good[0];

    for(int i = 1; i < n; i++){
        pre[i] = pre[i - 1] + good[i];
    }

    ll ans = 0;
    for(int i = 0 ; i < n - k; i++){
        if(pre[i + k] - pre[i] == k) ans++;
    }

    cout<<ans<<"\n";
    return;
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