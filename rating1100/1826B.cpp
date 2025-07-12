#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    ll n; 
    cin >> n;
    vector<ll> arr(n);

    for (int i = 0; i < n; i++) cin >> arr[i];

    ll ans = max(arr[0], arr[n-1]) - min(arr[0], arr[n-1]);

    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }
}
