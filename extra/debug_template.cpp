#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin >> n;

    vector<pair<ll, ll>> arr(n);
    vector<ll> sum(n);
    vector<ll> ans;

    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i].first;
        arr[i].second = i + 1;
    }

    sort(arr.begin(), arr.end());

    sum[0] = arr[0].first;

    for (ll i = 1; i < n; i++)
    {
        sum[i] = arr[i].first + sum[i - 1];
    }

    for (ll i = 0; i < (n - 1); i++)
    {
        if (sum[n - 2] - arr[i].first == arr[n - 1].first)
            ans.push_back(arr[i].second);
    }
    if (sum[n - 3] == arr[n - 2].first)
        ans.push_back(arr[n - 1].second);

    if (ans.size() == 0)
    {
        cout << 0 << endl;
        return 0;
    }

    cout << ans.size() << endl;
    for (ll i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";
    cout << endl;

    return 0;
}