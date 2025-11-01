#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr)

void solve()
{
    fastio;
    int n, m;
    cin >> n;

    vector<pair<int, int>> v;
    while(n--){
        int k; cin>>k;
        int low = 0;
        for(int i = 1; i <= k; i++){
            int a; cin>>a;
            low = max(low, (a - (i - 1) + 1));
        }
        v.push_back({low, k});
    }
    sort(v.begin(), v.end());
    int ans = 0, now = 0;
    for(int i = 0; i < v.size(); i++){
        ans = max(ans, v[i].first - now);
        now += v[i].second;
    }
    cout<<ans<<endl;
}

int main()
{
    fastio;
    int t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}