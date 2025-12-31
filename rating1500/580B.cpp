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

int binSearch(int low, int high, int target, vpll &fact){
    while(low <= high){
        int mid = (low + high) / 2;
        if(fact[mid].first < target){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return high;
}
void solve()
{
    ll n, d;
    cin >> n >> d;

    vpll fact(n);
    for (int i = 0; i < n; i++){
        cin >> fact[i].first;
        cin >> fact[i].second;
    }

    vll pre(n);
    sort(fact.begin(), fact.end());

    pre[0] = fact[0].second;
    for(int i = 1; i < n; i++){
        pre[i] = pre[i - 1] + fact[i].second;
    }

    ll ans = 0;

    for(int i = 0; i < n; i++){

        ll target = fact[i].first + d;
        int low = i;
        int high = n - 1;
        int index = binSearch(low, high, target, fact);

        if(i > 0){
            ll temp = pre[index] - pre[i - 1];
            ans = max(ans, temp);
        }
        else{
            ll temp = pre[index];
            ans = max(ans, temp);
        }
    }
    cout << ans << nl;

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