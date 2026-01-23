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

vvi adj; 
vi color;
bool isBipartite = true;


void bfs(int startNode)
{
    queue<int> q;
    q.push(startNode);
    color[startNode] = 1;

    while (!q.empty())
    {
        int u = q.front();
        q.pop();

        for (int v : adj[u])
        {
            if (color[v] == 0)
            {
                color[v] = 3 - color[u];
                q.push(v);
            }
            else if (color[v] == color[u])
            {
                isBipartite = false;
                return;
            }
        }
    }
}

void solve()
{
    int n, m;
    cin >> n >> m;

    adj.assign(n + 1, vector<int>());
    color.assign(n + 1, 0);
    isBipartite = true;

    for (int i = 0; i < m; ++i)
    {
        int u, v;
        cin >> u >> v;
        adj[u].pb(v);
        adj[v].pb(u);
    }

    for (int i = 1; i <= n; ++i)
    {
        if (color[i] == 0)
        {
            bfs(i);
            if (!isBipartite)
            {
                cout << -1 << "\n";
                return;
            }
        }
    }

    vector<int> set1, set2;
    for (int i = 1; i <= n; ++i)
    {
        if (color[i] == 1)
            set1.pb(i);
        else
            set2.pb(i);
    }

    cout << set1.size() << nl;
    for (int i = 0; i < set1.size(); ++i)
        cout << set1[i] << " ";
    cout << nl;

    cout << set2.size() << nl;
    for (int i = 0; i < set2.size(); ++i)
        cout << set2[i] << " ";
    cout << nl;
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