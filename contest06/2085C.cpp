#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

void solve() {
    ll x, y;
    cin >> x >> y;

    if (x == y) {
        cout << "0\n"; // k = 0 if both numbers are the same
        return;
    }

    // Calculate XOR and sum
    ll xorVal = x ^ y;
    ll sumVal = x + y;

    // Check if the result is non-negative and even
    if ((xorVal - sumVal) % 2 != 0 || (xorVal - sumVal) < 0) {
        cout << "-1\n";
        return;
    }

    // Calculate k
    ll k = (xorVal - sumVal) / 2;

    cout << k << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}