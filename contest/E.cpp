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
    ll n, x, y;
    cin >> n >> x >> y;
    string s;
    cin >> s;

    vi p(n);
    ll req = 0;
    for (auto &it : p)
    {
        cin >> it;
        req += it;
    }
    if (req > (x + y))
    {
        cout << "NO" << nl;
        return;
    }

    ll extra = x + y - req;
    ll winA = 0;
    ll winB = 0;
    ll a_districts = 0;
    ll b_districts = 0; 
    ll evenA = 0;       
    ll evenB = 0; 

    for (int i = 0; i < n; i++)
    {
        ll cost = (p[i] / 2) + 1;
        if (s[i] == '0')
        {
            winA += cost;
            a_districts++;
            if (p[i] % 2 == 0)
                evenA++;
        }
        else
        {
            winB += cost;
            b_districts++;
            if (p[i] % 2 == 0)
                evenB++;
        }
    }

    if (winA > x || winB > y){
        cout << "NO" << nl;
        return;
    }

    ll leftA = x - winA;
    ll leftB = y - winB;

    ll max_add_A = 0;
    if (a_districts > 0){
        max_add_A = evenA + (leftA * 2);
    }

    ll max_add_B = 0;
    if (b_districts > 0){
        max_add_B = evenB + (leftB * 2);
    }

    if (extra <= max_add_A + max_add_B){
        cout << "YES" << nl;
    }
    else{
        cout << "NO" << nl;
    }
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