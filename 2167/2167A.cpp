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
    set<int> st;
    for(int i = 0; i < 4; i++){
        int x; cin >> x;
        st.insert(x);
    }

    if(st.size() > 1) cout << "NO\n";
    else cout << "YES\n";
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
