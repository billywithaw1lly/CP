#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int &x : arr) cin >> x;

    int minLen = n + 1;

    for (int i = 0; i < n; i++) {
        set<int> s;
        for (int j = i; j < n; j++) {
            s.insert(arr[j]);
            bool ok = true;
            for (auto it1 = s.begin(); it1 != s.end(); ++it1) {
                for (auto it2 = next(it1); it2 != s.end(); ++it2) {
                    if ((*it1 ^ *it2) < k) {
                        ok = false;
                        break;
                    }
                }
                if (!ok) break;
            }
            if (ok) minLen = min(minLen, j - i + 1);
        }
    }

    cout << (minLen == n + 1 ? -1 : minLen) << '\n';
}

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int t; cin >> t;
    while (t--) solve();
}