#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr)


// int main()
// {
//     fastio;

//     ll n, m;
//     cin>>n>>m;

//     vector<pair<ll, pair<ll, ll>>> arr;

//     for (ll i = 0; i < n; i++)
//     {
//         for (ll j = 0; j < m; j++)
//         {
//             ll val;
//             cin >> val;
//             arr.push_back({val, {i, j}});
//         }
//     }

//     sort(begin(arr), end(arr));

//     ll k = 0;
//     ll tempans = 0;
//     ll ans = 0;
//     ll i = 0;

//     for(ll i = 1; i <= n * m;){
//         ll val = arr[k].first;
//         ll xval = arr[k].second.first;
//         ll yval = arr[k].second.second;

//         //cout<<"main -> "<<val<<" "<<xval<<" "<<yval<<endl;

//         ll temp = arr[i].first;
//         ll x = arr[i].second.first;
//         ll y = arr[i].second.second;

//         //cout << "sub -> " << temp << " " << x << " " << y << endl;
//         if(temp == val){
//             tempans += abs(x - xval) + abs(y - yval);
//             i++;
//         } else {
//             ans += tempans;
//             tempans = 0;
//             k++;
//             i = k + 1;
//         }

//         if((xval == x && yval == y) && (x == (n - 1) && y == (m - 1))) break;
//     }
//     ans += tempans;
//     cout<<ans<<"\n";
//     return 0;
// }

int main()
{
    fastio;

    ll n, m;
    cin >> n >> m;

    vector<pair<ll, pair<ll, ll>>> arr;

    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            ll val;
            cin >> val;
            arr.push_back({val, {i, j}});
        }
    }

    sort(begin(arr), end(arr));

    ll ans = 0;
    for (ll k = 0; k < n * m;)
    {
        ll val = arr[k].first;
        vector <int> x,y;

        // Collect all coordinates with same value
        while (k < n * m && arr[k].first == val)
        {
            x.push_back(arr[k].second.first);
            y.push_back(arr[k].second.second);
            k++;
        }

        sort(begin(x), end(x));
        sort(begin(y), end(y));

        ll times = x.size();
        ll val = x.size() - 1;

        ll temp1 = 0;
        ll temp2 = 0;

        for(int i = 0; i < times; i++){
            temp1 += val * x[i];
            temp2 += val * y[i];
            val-=2;
        }

        ans += (temp1 + temp2);

    }
    cout << ans << "\n";
    return 0;
}
