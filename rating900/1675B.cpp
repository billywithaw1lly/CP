#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

void solve() {
    ll n;
    cin >> n;
    vector<ll> arr(n);

    for (ll i = 0; i < n; i++) cin >> arr[i];

    ll count = 0;

    for (ll i = n - 2; i >= 0; i--) { 
        while (arr[i] >= arr[i + 1] && arr[i] > 0) {
            arr[i] /= 2;
            count++;
        }
        if (arr[i] == arr[i + 1]) { 
            cout << "-1\n";
            return;
        }
    }

    cout << count << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}