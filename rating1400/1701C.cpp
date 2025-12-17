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
vi freq;

bool binsearch(int n, int m, int t){
    ll maxP = 0;
    for(int i = 0; i < n; i++){
        if(t < freq[i]){
            maxP += t;
        } else {
            maxP += freq[i] + (t - freq[i]) / 2;
        }
    }
    return maxP >= m;
}
void solve()
{
    int n, m;
    cin >> n >> m;
    freq.assign(n, 0);
    for(int i = 0; i < m; i++){
        int x; cin >> x;
        freq[x - 1]++;
    }
    int low = 0, high = 2 * m;
    while(low < high){
        int mid = (low + high) / 2;
        if(binsearch(n, m, mid)){
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

    for (T = 1; T <= t; T++)
    {
        solve();
    }

    return 0;
}