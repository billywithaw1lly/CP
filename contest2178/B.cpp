//codeforces inflation is for real

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr)
#define nl "\n"
using vi = vector<int>;
using vll = vector<long long>;
using vvi = vector<vector<int>>;
using vpii = vector<pair<int, int>>;
using vpll = vector<pair<ll, ll>>;
#define pb push_back

int T;
// the failing attempt
// may the kermit bless me

void solve()
{
    string s;
    cin >> s;
    int n = s.size();
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 's')
            continue;
        int j = i;
        while (j < n && s[j] == 'u')
            j++;

        int l = j - i;
        int e = (i == 0) + (j == n);
        int rem = max(0, l - e);
        ans += (e + (rem / 2));
        i = j - 1;
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