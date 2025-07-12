#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    ll n, k;
    cin >> n >> k;
    vector<vector<ll>> a(n, vector<ll>(n));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];

    // 1. Count each mismatch-pair exactly once
    ll mismatches = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int ni = n - 1 - i, nj = n - 1 - j;
            // only consider each unordered pair once
            if (i > ni || (i == ni && j > nj)) 
                continue;
            if (a[i][j] != a[ni][nj]) 
                mismatches++;
        }
    }

    // 2. Not enough flips?
    if (mismatches > k) {
        cout << "NO\n";
        return;
    }

    // 3. Can we waste the leftovers?
    ll leftover = k - mismatches;
    if (n % 2 == 0 && (leftover % 2 == 1)) {
        // even n, but odd leftover → cannot maintain symmetry
        cout << "NO\n";
    } else {
        cout << "YES\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    cin >> t;
    while (t--) 
        solve();

    return 0;
}