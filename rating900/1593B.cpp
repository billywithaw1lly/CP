#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

void solve() {
    string n;
    cin >> n;

    int minRemove = INT_MAX;
    int len = n.size();

    // Check for '00' or '50'
    for (int i = len - 1; i >= 0; i--) {
        if (n[i] == '0' || n[i] == '5') { 
            for (int j = i - 1; j >= 0; j--) {
                if ((n[i] == '0' && (n[j] == '0' || n[j] == '5')) || 
                    (n[i] == '5' && (n[j] == '2' || n[j] == '7'))) {
                    minRemove = min(minRemove, (i - j - 1) + (len - i - 1));
                }
            }
        }
    }

    cout << minRemove << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}