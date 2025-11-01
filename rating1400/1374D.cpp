#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr)

void solve()
{
    int n, k;
    cin>>n>>k;

    vector<int> arr(n);

    for(int i = 0 ; i < n; i++){
        cin>>arr[i];
        arr[i] = k - (arr[i] % k);
    }
    for (int i = 0; i < n; i++)
    {
        if(arr[i] == k)
        arr[i] = 0;
    }

    sort(begin(arr), end(arr));

    // for(int i = 0; i < n; i++){
    //     cout<<arr[i]<<" ";
    // } cout<<endl;

    map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
            mp[arr[i]]++;
    }

    if (mp.empty())
    {
        cout << 0 << "\n";
    }
    else
    {
        ll ans = 0;
        for (auto &p : mp)
        {
            ll rem = p.first;
            ll cnt = p.second;
            ans = max(ans, rem + 1 + (cnt - 1) * k);
        }
        cout << ans << "\n";
    }

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