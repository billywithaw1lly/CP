#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

void solve() {
    ll n;
    cin >> n;

    while (true) {
        ll copy = n;
        bool valid = true;

        while (copy > 0) {
            int dig = copy % 10;
            if (dig != 0 && n % dig != 0) {
                valid = false;
                break;
            }
            copy /= 10;
        }

        if (valid) {
            cout << n << endl;
            return; 
        }
        n++;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}