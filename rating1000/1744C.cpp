#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

void solve() {
    ll n;
    char ch;
    cin >> n >> ch;
    string str;
    cin >> str;
    
    bool allSame = true;
    for (char c : str) {
        if (c != ch) {
            allSame = false;
            break;
        }
    }
    if (allSame) {
        cout << "0\n";
        return;
    }
    
    str += str;
    vector<int> g_positions;
    for (int i = 0; i < 2 * n; ++i) {
        if (str[i] == 'g') {
            g_positions.push_back(i);
        }
    }
    
    int max_dif = 0;
    for (int i = 0; i < n; ++i) {
        if (str[i] == ch) {
            auto it = lower_bound(g_positions.begin(), g_positions.end(), i);
            if (it != g_positions.end()) {
                max_dif = max(max_dif, *it - i);
            }
        }
    }
    
    cout << max_dif << "\n";
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