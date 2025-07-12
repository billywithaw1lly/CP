// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// #define fastread ios_base::sync_with_stdio(0); cin.tie(0);

// void solve() {
//     fastread;

//     ll n;
//     cin >> n;
//     ll arr[n][n];

//     for(int i = 0; i < n; i++)
//         for(int j = 0; j < n; j++)
//             cin >> arr[i][j];

//     ll count = 0;

//     for(int i = 0; i < (n + 1) / 2; i++) {
//         for(int j = 0; j < n / 2; j++) {
//             int a = arr[i][j];
//             int b = arr[j][n - i - 1];
//             int c = arr[n - i - 1][n - j - 1];
//             int d = arr[n - j - 1][i];

//             int ones = a + b + c + d;
//             count += min(ones, 4 - ones);
//         }
//     }

//     cout << count << '\n';
// }
    
// int main() {
//     fastread;
//     int T;
//     cin >> T;
//     while (T--) {
//         solve();
//     }
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<vector<int>> a(n, vector<int>(n));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];

    ll ans = 0;
    for (int i = 0; i < (n+1)/2; i++) {
        for (int j = 0; j < n/2; j++) {
            int v1 = a[i][j];
            int v2 = a[j][n-1-i];
            int v3 = a[n-1-i][n-1-j];
            int v4 = a[n-1-j][i];
            int ones = v1 + v2 + v3 + v4;
            ans += min(ones, 4 - ones);
        }
    }

    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) solve();
    return 0;
}

