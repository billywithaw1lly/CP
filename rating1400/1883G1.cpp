#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr)
#define nl "\n"
using vi = vector<int>;
using vvi = vector<vector<int>>;
using vii = vector<pair<int, int>>;
using vll = vector<pair<ll, ll>>;

int T;

bool check(int ops, vi a, vi b)
{
    for(int i = 0; i < ops; i++){
        a.pop_back();
        b.pop_back();
    }
    reverse(b.begin(), b.end());

    for(int i = 0; i < a.size(); i++){
        if(a[i] >= b[i]){
            return false;
        }
    }
    return true;
}

void solve()
{
    int n, m;
    cin >> n >> m;
    vi a(n);
    vi b(n);
    a[0] = 1;
    for(int i = 1; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];
    sort(a.begin(), a.end());
    sort(b.rbegin(), b.rend());
    int low = 0, high = n;

    while( low < high){
        int mid = (low + high) / 2;
        if(check(mid, a, b)){
            high = mid;
        } else {
            low = mid + 1;
        }
    }
    cout << low << nl;

    return;
}
int main()
{
    fastio;
    int t;
    cin >> t;

    for(T = 1; T <= t; T++){
        solve();
    }

    return 0;
}