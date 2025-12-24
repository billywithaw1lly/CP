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

// the failing attempt
void solve()
{
    //0 -> rest
    //1 -> contest
    //2 ->gym
    //3 -> both
    ll n; cin >> n;
    vi a(n);
    for(auto &it : a)
        cin >> it;

    int rest = 0;
    for(int i = 1; i < n; i++){
        if(a[i - 1] == 1 && a[i] == 3 ) a[i] = 2;
        else if(a[i - 1] == 2 && a[i] == 3) a[i] = 1;
        else if(a[i - 1] == a[i] && a[i] != 3) a[i] = 0;
    }
    for (int i = 0; i < n; i++) if(a[i] == 0) rest++;

    cout << rest << nl;
}

int main()
{
    fastio;
    int t = 1;
    //cin >> t;

    for (T = 1; T <= t; T++)
    {
        solve();
    }

    return 0;
}