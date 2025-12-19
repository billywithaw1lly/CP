#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr)
#define nl "\n"
using vi = vector<int>;
using vvi = vector<vector<int>>;
using vii = vector<pair<int, int>>;
using vll = vector<pair<ll, ll>>;

int T;

void solve()
{
    int l, a, b;
    cin >> l >> a >> b;
    //cout << "1" << nl;
    int first = (a + b) % l;
    //cout << "2" << nl;
    int ans = INT_MIN;
    int temp = first;
    set<int> st;

    while (st.size() < l)
    {
        if (st.count(temp))
            break;

        st.insert(temp);
        ans = max(ans, temp);

        temp = (temp + b) % l;
    }
    cout << ans << nl;
}

int main()
{
    fastio;
    int t;
    cin >> t;

    for (T = 1; T <= t; T++)
    {
        solve();
    }

    return 0;
}