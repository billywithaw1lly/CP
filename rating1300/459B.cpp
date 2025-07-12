#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD = 1e9 + 7;

// ll factorial(ll n) {
//     ll result = 1;
//     for (ll i = 2; i <= n; i++) {
//         result = (result * i) % MOD;
//     }
//     return result;
// }

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    ll n;
    cin >> n;
    vector<ll> v(n);

    for(ll i = 0; i < n; i++)
        cin >> v[i];

    sort(v.begin(), v.end());
    ll maxx = v[n - 1];
    ll minn = v[0];
    ll countMax = 0, countMin = 0;

    for(ll i = 0; i < n; i++) {
        if (v[i] == maxx)  countMax++;
        else if (v[i] == minn) countMin++;
    }

    // ll proMax = factorial(countMax);
    // ll proMin = factorial(countMin);
    ll ans = (countMax * countMin);

    if(maxx - minn == 0){
        ans = (countMax * (countMax - 1)) / 2;
    }

    cout << maxx - minn << " " << ans << endl;

    return 0;
}
