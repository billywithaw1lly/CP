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
const int INF = 1e9;

void solve()
{
    int n; cin >> n;
    vi a(n);

    for(auto &it : a){
        cin >> it;
    }

    sort(a.rbegin(), a.rend());

    vi pre(n);
    pre[0] = a[0];

    for(int i = 1; i < n; i++){
        pre[i] = pre[i - 1] + a[i];
    }

    int left = 0;
    int right = n - 1;
    while(left < right){
        int mid = (left + right) / 2;
        if(pre[mid] < 0) right = mid - 1;
        else if(pre[mid] >= 0) left = mid + 1;
    }
    cout << left << nl;
}

int main()
{
    fastio;
    int t;
    //cin >> t;
    t = 1;
    for (T = 1; T <= t; T++)
    {
        solve();
    }

    return 0;
}