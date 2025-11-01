#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define fastread                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);

using vi = vector<int>;
using vvi = vector<vector<int>>;

const int MOD = 1e7 + 9;
const int N = 2e5 + 1;
ll dp[N][3][3];

void solve()
{
    int n; cin >>n;
    string s, t;
    cin >> s >> t;
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());

    if(s == t) cout << "YES\n";
    else cout << "NO\n";
    return;
}

int main()
{
    fastread;
    int t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}
