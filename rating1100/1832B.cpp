#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (ll &x : a) cin >> x;

    sort(a.begin(), a.end());

    vector<ll> prefix(n);
    
    prefix[0] = a[0];
    for (int i = 1; i < n; i++) {
        prefix[i] = prefix[i-1] + a[i];
    }

    ll max_sum = 0;
    for (ll m = 0; m <= k; m++) {
        if (2 * m > n) continue;
        if ((k - m) > (n - 2 * m)) continue;

        ll left = 2 * m;
        ll right = n - 1 - (k - m);

        if (left > right) continue;

        ll curr_sum = prefix[right];
        if (left > 0) curr_sum -= prefix[left-1];

        max_sum = max(max_sum, curr_sum);
    }

    cout << max_sum << "\n";
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
