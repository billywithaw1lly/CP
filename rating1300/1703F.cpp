#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr)

int binser(int n, int k, vector<ll> &per)
{
    int low = 0;
    int high = n;
    int ans = n;
    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (per[mid] > k)
        {
            high = mid - 1;
            ans = mid;
        }
        else
        {
            low = mid + 1;
        }
    }
    return (n - ans);
}

void solve()
{
    fastio;
    int n;
    cin >> n;

    vector<pair<ll, ll>> arr(n + 1);
    vector<pair<ll, ll>> ans;
    vector<ll> per;

    arr[0].first = -1;
    arr[0].second = -1;

    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i].first;
        if (arr[i].first >= i)
            arr[i].first = -1;
        else
        {
            per.push_back(arr[i].first);
        }
        arr[i].second = i;
    }

    sort(arr.begin(), arr.end());
    sort(per.begin(), per.end());

    int m = per.size();

    // testing
    // for (int i = 1; i <= n; i++)
    // {
    //     cout << arr[i].first << " " << arr[i].second << endl;
    // }

    // cout<<m<<endl;

    // for(int i = 0; i < m; i++)
    // cout<<per[i]<<" ";
    // cout<<endl;

    ll count = 0;

    for (int i = 1; i < n; i++)
    {
        if (arr[i].first > -1)
        {
            int binn = binser(m,arr[i].second, per);
            count += binn;
        }
    }
    cout<<count<<endl;

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