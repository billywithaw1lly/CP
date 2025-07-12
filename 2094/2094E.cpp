//please work
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];

    vector<int> bitCount(30, 0);
    for (ll num : a) {
        for (int b = 0; b < 30; ++b) {
            if (num & (1 << b)) {
                bitCount[b]++;
            }
        }
    }

    ll maxSum = 0;

    for (ll num : a) {
        ll currentSum = 0;
        for (int b = 0; b < 30; ++b) {
            ll bitVal = (1 << b);
            if (num & bitVal) {
                currentSum += bitVal * (n - bitCount[b]);
            } else {
                currentSum += bitVal * bitCount[b];
            }
        }
        maxSum = max(maxSum, currentSum);
    }

    cout << maxSum << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
}