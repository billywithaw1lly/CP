#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr)
#define nl "\n"
using vi = vector<int>;
using vll = vector<long long>;
using vvi = vector<vector<int>>;
using vpii = vector<pair<int, int>>;
using vpll = vector<pair<ll, ll>>;
#define pb push_back
int T;
// the failing attempt
// may the kermit bless me

void solve()
{
    // n, m , k -> friends, boxes, coins
    // friend x, y , z - > atleast a beauty of x, atleast y coins (necessary), worth of happiness
    //maximise happy friends, gift may or maynot be in a box, must purchase gifts for all with k coins

    ll n, m , k;
    cin >> n >> m >> k;

    vll box(m);
    for (auto &s : box)
        cin >> s;

    sort(box.begin(), box.end());
    vpll fri(n);

    ll sumy = 0;
    for(int i = 0; i < n; i++){
        ll x, y , z;
        cin >> x >> y >> z;
        fri[i].first = x;
        fri[i].second = z - y;
        sumy += y;
    }
    if(sumy > k){
        cout << 0 << nl;
        return;
    }
    k -= sumy;

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