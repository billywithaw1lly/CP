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
    int n;
    cin >> n;
    vi a(n);

    for (auto &it : a)
    {
        cin >> it;
    }

    priority_queue<ll, vll, greater<ll>> pq;

    ll current_health = 0;
    for (int i = 0; i < n; i++)
    {
        current_health += a[i];
        pq.push(a[i]);

        if (current_health < 0)
        {
            current_health -= pq.top();
            pq.pop();
        }
    }

    cout << pq.size() << nl;
}

int main()
{
    fastio;
    int t;
    // cin >> t;
    t = 1;
    for (T = 1; T <= t; T++)
    {
        solve();
    }

    return 0;
}