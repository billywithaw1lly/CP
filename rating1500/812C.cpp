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

ll get_cost(int k, int n, const vi& a){
    if(k == 0) return 0;

    vll prices;
    prices.reserve(n);

    for(int i = 0; i < n; i++){
        ll effective_price = a[i] + (ll)(i + 1) * k;
        prices.pb(effective_price);
    }

    sort(prices.begin(), prices.end());

    ll sum = 0;
    for(int i = 0; i < k; i++){
        sum += prices[i];
    }

    return sum;
}
void solve()
{
    int n, s;
    cin >> n >> s;
    //n -> total in market, s -> budget

    vi a(n);

    for(auto &it : a)
        cin >> it;
    
    int low = 0, high = n;
    int ans_k = 0;
    ll ans_cost = 0;

    while(low <= high){
        int mid = low + (high - low) / 2;
        ll current_cost = get_cost(mid, n , a);

        if(current_cost <= s){
            ans_k = mid;
            ans_cost = current_cost;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    cout << ans_k << " " << ans_cost << nl;
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