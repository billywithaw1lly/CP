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
    for(auto &it : p){
        cin >> it;
        req += it;
    }
    
    if(req > (x + y)){
        cout << "NO" << nl;
        return;
    }
    //0 -> a & 1 -> b

    ll extra = x + y - req;
    ll winA = 0;
    ll winB = 0;
    ll a = 0;
    ll b = 0;

    for(int i = 0; i < n; i++){
        if(s[i] == '0'){
            winA += (p[i] / 2) + 1;
            a++;
        }
        else {
            winB += (p[i] / 2) + 1;
            b++;
        }
    }
    if(winA > x || winB > y){
        cout << "NO" << nl;
        return;
    }

    ll leftA = x - winA;
    ll leftB = y - winB;

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