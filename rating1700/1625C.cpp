#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
using vi = vector<int>;

#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr)

const int MOD = 100000000;
const int MAXN = 100005;

vector<int> pref(MAXN);
int cache[501][501];

vector<int> pos, t, dist;

int dp(int i, int k, int n){
    if(i == n) return 0;
    if(cache[i][k] != -1) return cache[i][k];

    int d = dist[i];
    int time = t[i];
    int ans = INFINITY;

    int remove = k;

    for(int j = i + 1; j <= n && remove >= 0 ; j++){
        int op1 = (time * d) + dp(j, remove, n);
        ans = min(ans, op1);

        d += dist[j];
        remove--;
    }
    return cache[i][k] = ans;

}

void solve()
{
    int n, l, k;
    cin >> n >> l >> k;

    t.resize(n);
    pos.resize(n);
    dist.resize(n);

    for (int i = 0; i < n; i++)
        cin >> pos[i];
    for (int i = 0; i < n; i++)
        cin >> t[i];

    pos.push_back(l);

    for (int i = 0; i < n; i++)
        dist[i] = pos[i + 1] - pos[i];
    dist.push_back(0);

    memset(cache, -1, sizeof(cache));
    cout << dp(0, k, n) << endl;
}

int main()
{
    fastio;
    int t = 1;

    int test = 1;
    while (t--)
    {
        solve();
        test++;
    }

    return 0;
}