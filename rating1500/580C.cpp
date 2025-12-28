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
const int MAXN = 100005;
vi adj[MAXN];
int hasCat[MAXN];
int n, m;
int ans;
// the failing attempt
// may the kermit bless me

void dfs(int c, int p, int cats)
{
    if(hasCat[c] == 1)
        cats++;
    else
        cats = 0;
    
    if(cats > m) return;

    bool isleaf = true;
    for(int v : adj[c]){
        if(v != p){
            isleaf = false;
            dfs(v, c, cats);
        }
    }
    if(isleaf) ans++;
}

void solve()
{
    cin >> n >> m;

    for(int i = 1; i <= n; i++){
        cin >> hasCat[i];
    }
    
    for(int i = 0; i < n - 1; i++){
        int u, v;
        cin >> u >> v;
        adj[u].pb(v);
        adj[v].pb(u);
    }

    dfs(1, -1, 0);
    
    cout << ans << nl;

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