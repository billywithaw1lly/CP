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
    int n, m;
    cin >> n >> m;

    vvi lang(n);
    int zeroLang = 0;

    // read input
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        if (k == 0)
            zeroLang++;
        lang[i].resize(k);
        for (int j = 0; j < k; j++)
        {
            cin >> lang[i][j];
        }
    }

    if(zeroLang == n){
        cout << n << nl;
        return;
    }

    vvi adj(n);
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            bool common = false;
            for (int x : lang[i])
            {
                for (int y : lang[j])
                {
                    if (x == y)
                    {
                        common = true;
                        break;
                    }
                }
                if (common)
                    break;
            }
            if (common)
            {
                adj[i].pb(j);
                adj[j].pb(i);
            }
        }
    }

    vector<bool> visited(n, false);
    function<void(int)> dfs = [&](int u)
    {
        visited[u] = true;
        for (int v : adj[u])
        {
            if (!visited[v])
                dfs(v);
        }
    };

    int components = 0;
    bool anyKnown = false;

    for (int i = 0; i < n; i++)
    {
        if (!lang[i].empty())
        {
            anyKnown = true;
            if (!visited[i])
            {
                components++;
                dfs(i);
            }
        }
    }
    
    if (!anyKnown)
    {
        cout << n << nl;
    }
    else
    {
        cout << components - 1 + zeroLang << nl;
    }
}

int main()
{
    fastio;
    int t = 1;
    // cin >> t;

    for (T = 1; T <= t; T++)
    {
        solve();
    }

    return 0;
}