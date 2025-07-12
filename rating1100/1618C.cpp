#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    ll n;
    cin >> n;
    vector<ll> arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    ll even_gcd = arr[0];
    ll odd_gcd = (n > 1 ? arr[1] : 0);

    for (int i = 2; i < n; i += 2)
        even_gcd = gcd(even_gcd, arr[i]);
    for (int i = 3; i < n; i += 2)
        odd_gcd = gcd(odd_gcd, arr[i]);

    // check even_gcd
    bool ok = true;
    for (int i = 1; i < n; i += 2) {
        if (arr[i] % even_gcd == 0) {
            ok = false;
            break;
        }
    }
    if (ok) {
        cout << even_gcd << '\n';
        return;
    }

    // check odd_gcd
    ok = true;
    for (int i = 0; i < n; i += 2) {
        if (arr[i] % odd_gcd == 0) {
            ok = false;
            break;
        }
    }
    if (ok) {
        cout << odd_gcd << '\n';
        return;
    }

    cout << "0\n";
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
