#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    ll n, k;
    cin >> n >> k;
    vector<pair<ll, ll>> quests(n);
    
    for (ll i = 0; i < n; i++) {
        cin >> quests[i].first; // a_i
    }
    for (ll i = 0; i < n; i++) {
        cin >> quests[i].second; // b_i
    }
    
    ll max_sum = 0;
    ll current_sum = 0;
    ll max_b = 0;
    ll best = 0;
    
    for (ll i = 0; i < min(n, k); i++) {
        current_sum += quests[i].first;
        max_b = max(max_b, quests[i].second);
        
        ll remaining = k - (i + 1);
        if (remaining > 0) {
            ll current = current_sum + max_b * remaining;
            best = max(best, current);
        } else {
            best = max(best, current_sum);
        }
    }
    
    cout << best << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}