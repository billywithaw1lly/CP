#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastread ios_base::sync_with_stdio(0); cin.tie(0);

void solve() {
    fastread;
    ll n;
    cin >> n;
    string s;
    cin >> s;

    vector<ll> c(n + 1, 1);
    c[0] = 0;

    for (int i = 0; i < n; i++) {
        if (s[i] == '0') {
            c[i + 1] = 0;
        }
    }

    ll ans = 0;
    int cost[n + 1];
    for (int i = n; i >= 1; i--) {
        for (int j = i; j <= n; j += i) {
            if (c[j]) break;
            cost[j] = i;
        }
    }
    for (int i = 1; i <= n; i++) {
        if (!c[i]) ans += cost[i];
    }
    cout << ans << '\n';
}

int main() {
    fastread;
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}
