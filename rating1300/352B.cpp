#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll n;
    cin >> n;

    vector<ll> arr(n);
    map<ll, vector<ll>> positions;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        positions[arr[i]].push_back(i);
    }

    vector<pair<ll, ll>> v;

    for (auto &[val, pos] : positions) {
        if (pos.size() == 1) {
            // Single occurrence, difference is 0
            v.push_back({val, 0});
        } else {
            ll diff = pos[1] - pos[0];
            bool ok = true;
            for (int i = 2; i < pos.size(); i++) {
                if (pos[i] - pos[i - 1] != diff) {
                    ok = false;
                    break;
                }
            }
            if (ok) {
                v.push_back({val, diff});
            }
        }
    }

    if (v.empty()) {
        cout << 0 << endl;
    } else {
        cout << v.size() << "\n";
        for (auto [val, diff] : v) {
            cout << val << " " << diff << "\n";
        }
    }

    return 0;
}
