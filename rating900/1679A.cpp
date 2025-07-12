#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

void solve() {
    ll n;
    cin >> n;

    if (n % 2 != 0) {
        cout << "-1\n"; 
        return;
    }

    ll min_packs = LLONG_MAX, max_packs = n / 4;  

    
    for (ll y = n / 6; y >= 0; y--) {  
        ll remaining = n - (y * 6);
        if (remaining % 4 == 0) {
            min_packs = min(min_packs, y + (remaining / 4));
            break;
        }
    }

    if (min_packs == LLONG_MAX) {
        cout << "-1\n";  
    } else {
        cout << min_packs << " " << max_packs << "\n";
    }
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