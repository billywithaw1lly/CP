#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define fastread                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);

using vi = vector<int>;
using vvi = vector<vector<int>>;
using vii = vector<pair<int, int>>;
using vll = vector<pair<ll, ll>>;

const int MOD = 1000000;
const int N = 2e5 + 1;

int ans = 0;

int dfs(int node, vvi &adj, string &s){
    if (adj[node].size() == 0){
        return s[node - 1] == 'W' ? 1 : -1;
    }
    int count = 0;
    for (auto child : adj[node]){
        count += dfs(child, adj, s);
    }
    count += (s[node - 1] == 'W' ? 1 : -1);
    if (count == 0){
        ans++;
    }
    return count;
}

void solve(){
    ans = 0;
    int n;
    cin >> n;
    vvi adj(n + 1, vi());
    for (int i = 0; i < n - 1; i++){
        int temp;
        cin >> temp;
        adj[temp].push_back(i + 2);
    }
    string s;
    cin >> s;
    dfs(1, adj, s);
    cout << ans << endl;
}

int main(){
    fastread;
    int t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}
