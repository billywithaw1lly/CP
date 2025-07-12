#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastread ios_base::sync_with_stdio(0); cin.tie(0);

const int K = 50;

void solve() {
    int n;
    cin >> n;

    vector<ll> row1(n), row2(n), row3(n);
    for (int i = 0; i < n; i++) cin >> row1[i];
    for (int i = 0; i < n; i++) cin >> row2[i];
    for (int i = 0; i < n; i++) cin >> row3[i];

    vector<pair<ll, int>> top1, top2, top3;

    for (int i = 0; i < n; i++) top1.emplace_back(row1[i], i);
    for (int i = 0; i < n; i++) top2.emplace_back(row2[i], i);
    for (int i = 0; i < n; i++) top3.emplace_back(row3[i], i);

    sort(top1.rbegin(), top1.rend());
    sort(top2.rbegin(), top2.rend());
    sort(top3.rbegin(), top3.rend());

    ll ans = 0;

    for (int i = 0; i < min(K, n); i++) {
        for (int j = 0; j < min(K, n); j++) {
            if (top1[i].second == top2[j].second) continue;

            for (int k = 0; k < min(K, n); k++) {
                if (top1[i].second == top3[k].second || top2[j].second == top3[k].second) continue;

                ll sum = top1[i].first + top2[j].first + top3[k].first;
                ans = max(ans, sum);
            }
        }
    }

    cout << ans << "\n";
}

int main() {
    fastread;
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
