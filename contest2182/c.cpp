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

int countV(int n,vi &a, vi &b)
{
    int count = 0;
    for (int i = 0; i < n; ++i)
    {
        bool possible = true;
        for (int j = 0; j < n; ++j)
        {
            if (a[j] >= b[(i + j) % n])
            {
                possible = false;
                break;
            }
        }
        if (possible)
        {
            count++;
        }
    }
    return count;
}

void solve()
{
    // head torso and legs -> a b c
    //c > b > a

    int n; cin >> n;
    vi a(n);
    for(auto &it : a) 
        cin >> it;

    vi b(n);
    for (auto &it : b)
        cin >> it;

    vi c(n);
    for (auto &it : c)
        cin >> it;

    ll ab = countV(n, a, b);
    ll bc = countV(n, b, c);

    ll ans = ab * bc * n;

    cout << ans << endl;
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