#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    ll n, x;
    cin >> n >> x;

    if (x == n) {
        for (ll i = 0; i < n; i++) {
            cout << i << (i+1==n?'\n':' ');
        }
        return;
    }
    for (ll i = 0; i < n; i++) {
        if (i == x) continue;
        cout << i << ' ';
    }
    cout << x << "\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) solve();
    return 0;
}
