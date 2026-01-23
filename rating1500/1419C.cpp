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

void solve()
{
    int n, x;
    cin >> n >> x;
    vi a(n);

    for(auto &it : a)
        cin >> it;
    
    int count = 0;
    int sum = 0;

    for(int i = 0; i < n; i++){
        if(a[i] == x) count++;
        sum += a[i];
    }

    if(count == n){
        cout << 0 << nl;
        return;
    }
    if(count > 0){
        cout << 1 << nl;
        return;
    }
    if(sum == n * x){
        cout << 1 << nl;
        return;
    }

    cout << 2 << nl;

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