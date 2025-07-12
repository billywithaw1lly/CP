#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

void solve() {
    ll n, k;
    cin >> n >> k;

    vector<pair<ll, int>> vec(n);

    for (int i = 0; i < n; i++) {
        ll x;
        cin >> x;
        ll mod = x % k;
        if (mod == 0) mod = k;
        vec [i] = {-mod, i};
    }
    sort(vec.begin(), vec.end());

    for (int i = 0; i < n; i++) {
        cout << vec[i].second + 1 << " ";
    }
    cout << endl;
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