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
const int MOD = 998244353;
ll fact[60];
void prefact()
{
    fact[0] = 1;
    for (int i = 1; i <= 55; ++i)
        fact[i] = (fact[i - 1] * i) % MOD;
}
// the failing attempt
// may the kermit bless me

ll calc(int n, int k)
{
    if (k < 0 || k > n)
        return 0;
    ll res = 1;
    for (int i = 0; i < k; ++i)
    {
        res = (res * (n - i)) % MOD;
    }
    return res;
}

void solve()
{
    int n;
    cin >> n;

    vll a(n + 1);
    ll sum = 0;

    for(auto &s : a){
        cin >> s;
        sum += s;
    }
    ll k = sum / n;
    ll left = sum % n;
    int leftcnt = 0;

    for (int i = 1; i <= n; ++i)
    {
        if (a[i] > k + 1)
        {
            cout << 0 << nl;
            return;
        }
        if (a[i] == k + 1)
        {
            leftcnt++;
        }
    }
    if (leftcnt > left)
    {
        cout << 0 << nl;
        return;
    }
    ll h = calc(left, leftcnt);
    long long r = fact[n - leftcnt];
    long long ans = (h * r) % MOD;
    cout << ans << nl;
}

int main()
{
    fastio;
    prefact();
    int t;
    cin >> t;

    for (T = 1; T <= t; T++)
    {
        solve();
    }

    return 0;
}