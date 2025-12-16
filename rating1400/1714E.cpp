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

int T;

void solve()
{
    int n; cin >> n;
    vi a(n);

    for(auto &it : a) cin >> it;

    bool odd = false;
    bool even = false;

    for(int i = 0; i < n; i++){
        int temp = a[i] % 100;
        int res = a[i] % 10;
        temp /= 10;

        if(temp % 2 == 0)
        {
            
        }
        else
        {

        }
    }
    return;
}

int main()
{
    fastio;
    int t;
    cin >> t;

    for (T = 1; T <= t; T++)
    {
        solve();
    }

    return 0;
}