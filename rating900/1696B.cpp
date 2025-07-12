#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);

    bool hasNonZero = false;
    int segments = 0;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] != 0) hasNonZero = true;
    }

    if (!hasNonZero) {
        cout << "0\n";  // If all elements are zero, answer is 0.
        return;
    }

    // Count segments of nonzero numbers
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0 && (i == 0 || arr[i - 1] == 0)) {
            segments++;
        }
    }

    cout << min(segments, 2) << "\n";  // At most, answer is 2.
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