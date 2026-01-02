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
    int n;
    ll k;
    cin >> n >> k;

    vll a(n);
    vll rems;
    ll ans = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        ans += a[i] / k;
        rems.push_back(a[i] % k);
    }
    sort(rems.begin(), rems.end());

    int left = 0;
    int right = n - 1;

    while (left < right)
    {
        if (rems[left] + rems[right] >= k)
        {
            ans++;
            left++;
            right--;
        }
        else
        {
            left++;
        }
    }

    cout << ans << nl;
}

int main()
{
    fastio;
    // fact();
    int t;
    cin >> t;

    for (T = 1; T <= t; T++)
    {
        solve();
    }

    return 0;
}