#include <bits/stdc++.h>
#define ll long long
const int MOD = 1e9 + 7;
using namespace std;

int solve() {
    ll n;
    cin >> n;

    ll part1 = (n * (n + 1)) % MOD;
    ll part2 = (4 * n - 1) % MOD;
    ll ans = (part1 * part2) % MOD;
    ans = (ans * 337) % MOD;

    cout << ans << endl;
    return 0;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
