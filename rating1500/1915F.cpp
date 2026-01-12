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


//TLE attempt
void solve()
{
    int n; cin >> n;
    ll ans = 0;
    vpll a(n);
    for(auto &s : a){
        cin >> s.first;
        cin >> s.second;
    }

    sort(a.begin(), a.end());

    for(int i = 0; i < n; i++){
        if(i == (n - 1)) break;
        for(int j = i + 1; j < n; j++){
            if(a[i].second >= a[j].second)
                ans++;
        }
    }
    cout << ans << nl;
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