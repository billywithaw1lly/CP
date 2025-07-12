#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

ll findSmallestDivisor(ll n) {
    if (n % 2 == 0) return 2;
    for (ll i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return i;
    }
    return n; // n is prime
}

void solve(){
    ll n; cin >> n;

    if (n % 2 == 0) {
        cout << n / 2 << " " << n / 2 << endl;
    } else {
        ll d = findSmallestDivisor(n);
        if (d == n) { // n is prime
            cout << 1 << " " << n - 1 << endl;
        } else {
            cout << n / d << " " << n - n / d << endl;
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}