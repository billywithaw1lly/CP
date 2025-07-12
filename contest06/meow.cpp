#include <bits/stdc++.h>
using namespace std;
#define int long long
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
int inf = 1e7;
void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    int mn = inf;
    for(int i = 0; i < n-3; ++i) {
        mn = min(mn, a[i]);
    }
    vector<pair<int, int>> ans;
    if(n > 4) {
        ans.push_back({1, n-3});
    }
    int x = a[n-4];
    int y = a[n-3];
    int z = a[n-2];
    int t = a[n-1];
    if(n > 4) {
        if(mn) {
            x = 0;
        }else {
            x = 1;
        }
    }
    if(x && y && z && t) {
        ans.push_back({1, 4});
    }else {
        if(x) {
            ans.push_back({2, 4});
            ans.push_back({1, 2});
        }else if(t) {
            ans.push_back({1, 3});
            ans.push_back({1, 2});
        }else if(y){
            ans.push_back({3,  4});
            ans.push_back({1, 2});
            ans.push_back({1, 2});
        }else {
            ans.push_back({1,  2});
            ans.push_back({2, 3});
            ans.push_back({1, 2});
        }
    }
    cout << ans.size() << endl;
    for(auto x : ans) {
        cout << x.first << " " << x.second << '\n';
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt = 1;
    cin >> tt;

    while(tt--) {
        solve();
        cout << '\n';
    }
    return 0;
}