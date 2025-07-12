#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

void solve() {
    ll n, x, a;
    ll sumMin = 0, sumMax = 0;
    cin >> n >> x;

    for (int i = 0; i < n; i++) {
        cin >> a;
        sumMin += a;
        sumMax += (a + x - 1) / x; 
    }

    sumMin = (sumMin + x - 1) / x; 

    cout << sumMin << " " << sumMax << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; 
    cin >> t;
    while (t--) {
        solve(); 
    }

    return 0;
}