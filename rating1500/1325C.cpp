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
using vc = vector<char>;
using vs = vector<string>;
#define pb push_back
int T;
// the failing attempt
// may the kermit bless me

const int N = 100005;
vpii adj[N];
int ans[N];

void solve()
{
    int n;
    cin >> n;
    for (int i = 0; i < n - 1; i++)
    {
        int u, v;
        cin >> u >> v;

        adj[u].pb({v, i});
        adj[v].pb({u, i});

        ans[i] = -1;
    }

    int root = -1;
    for (int i = 1; i <= n; i++)
    {
        if (adj[i].size() >= 3)
        {
            root = i;
            break;
        }
    }

    int current_label = 0;
    if (root != -1)
    {
        for (int i = 0; i < 3; i++)
        {
            int edge_idx = adj[root][i].second;
            ans[edge_idx] = current_label++;
        }
    }

    for (int i = 0; i < n - 1; i++)
    {
        if (ans[i] == -1)
        {
            ans[i] = current_label++;
        }
    }
    for (int i = 0; i < n - 1; i++)
    {
        cout << ans[i] << nl;
    } 
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