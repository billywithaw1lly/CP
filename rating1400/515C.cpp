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
    int n; cin >> n;
    string s; cin >> s;

    string g = "";

    for(int i = 0; i < n; i++){
        if(s[i] == '4') g += "322";
        else if (s[i] == '6') g += "53";
        else if (s[i] == '8') g += "7222";
        else if (s[i] == '9') g += "7332";
        else g += s[i];
    }
    sort(g.rbegin(), g.rend());
    while(g.back() == '0' || g.back() == '1') g.pop_back();
    cout << g << nl;
}

int main()
{
    fastio;
    int t = 1;
    // cin >> t;

    for (T = 1; T <= t; T++)
    {
        solve();
    }

    return 0;
}