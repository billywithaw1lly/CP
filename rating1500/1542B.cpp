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
using vc = vector<char>;
using vs = vector<string>;
#define pb push_back

int T;
// the failing attempt
// may the kermit bless me

const int N = 100005;
const int INF = 1e9;

void solve()
{
    ll n, a, b;
    cin >> n >> a >> b;

    if (a == 1)
    {
        if ((n - 1) % b == 0)
            cout << "Yes" << nl;
        else
            cout << "No" << nl;
        return;
    }

    ll current_pow_a = 1;
    bool possible = false;

    while (current_pow_a <= n)
    {
        if ((n - current_pow_a) % b == 0)
        {
            possible = true;
            break;
        }

        if ((n / a) < current_pow_a)
            break;
        current_pow_a *= a;
    }

    if (possible)
        cout << "Yes" << nl;
    else
        cout << "No" << nl;
}

int main()
{
    fastio;
    int t;
    cin >> t;
    // t = 1;
    for (T = 1; T <= t; T++)
    {
        solve();
    }

    return 0;
}