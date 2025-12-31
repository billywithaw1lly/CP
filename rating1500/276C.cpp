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
// the failing attempt
// may the kermit bless me


void solve()
{
    int n, q;
    cin >> n >> q;

    vll a(n);
    for (ll &x : a)
        cin >> x;
    

    sort(a.rbegin(), a.rend());
    
    vi que(n + 1, 0);
    for(int i = 0; i < q; i++){
        int l, r;
        cin >> l >> r;

        que[l - 1]++;
        que[r]--;
    }

    vi pre(n, 0); ll temp = 0;
    for(int i = 0; i < n; i++){
        pre[i] = temp + que[i];
        temp += que[i];
    }

    sort(pre.rbegin(), pre.rend());

    ll sum = 0;

    for(int i = 0; i < n; i++){
        sum += (a[i] * pre[i]);
    }

    cout << sum << nl;


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