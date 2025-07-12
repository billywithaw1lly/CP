#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll y, k, n;
    cin >> y >> k >> n;

    ll x = k - (y % k);
    if (x + y > n) {
        cout << -1 << endl;
    } else {
        for (ll i = x; i + y <= n; i += k) {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}
