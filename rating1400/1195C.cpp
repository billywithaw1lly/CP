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
    ll n; cin >> n;
    vi a(n);
    vi b(n);
    
    for(auto &it : a) cin >> it;
    for(auto &it : b) cin >> it;

    ll sA = a[0];
    ll sB = b[0];
    ll sC = 0;

    for(int i = 1; i < n; i++){
        ll tempA = max(sB, sC) + a[i];
        ll tempB = max(sA, sC) + b[i];
        ll tempC = max(sA, sB, sC); 

        sA = tempA;
        sB = tempB;
        sC = tempC;
    }

    cout << max({sA, sB, sC}) << nl;
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