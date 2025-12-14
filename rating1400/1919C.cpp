#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr)
#define nl "\n"

using vi = vector<int>;
using vvi = vector<vector<int>>;
using vii = vector<pair<int, int>>;
using vll = vector<pair<ll, ll>>;


void solve()
{
    fastio;
    
    int n; cin >> n;
    vi a(n);
    for(auto &it : a)
        cin >> it;

    int ans = 0;                 
    int x = INT_MAX, y = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (x > y)
        {
            swap(x, y);
        }
        if (a[i] <= x)
        {
            x = a[i]; 
        }
        else if (a[i] <= y)
        {
            y = a[i];
        }
        else
        {
            x = a[i];
            ans++;
        }
    }

    cout << ans << '\n';
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