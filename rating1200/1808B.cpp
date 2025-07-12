#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    ll n, m;
    cin >> n >> m;
    vector<vector<ll>> arr(n, vector<ll>(m));

    // Input
    for (ll i = 0; i < n; i++)
        for (ll j = 0; j < m; j++)
            cin >> arr[i][j];

    ll sum = 0;

    // Process each column
    for (ll col = 0; col < m; col++) {
        vector<ll> temp;
        for (ll row = 0; row < n; row++)
            temp.push_back(arr[row][col]);

        sort(temp.begin(), temp.end());

        for (ll j = 0; j < n; j++)
            sum += temp[j] * (1 + 2 * j - n);
    }

    cout << sum << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
