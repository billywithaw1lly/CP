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
    int n, k;
    cin >> n >> k;

    vector<ll> gifts(n), friends(k);
    for (ll &x : gifts)
        cin >> x;
    for (ll &x : friends)
        cin >> x;

    sort(gifts.begin(), gifts.end());
    sort(friends.begin(), friends.end());

    ll sum = 0;
    int left = 0, right = n - 1;
    int i = 0;
    while (i < k && friends[i] == 1)
    {
        sum += 2 * gifts[right];
        right--;
        i++;
    }
    for (int j = k - 1; j >= i; j--)
    {
        int w = friends[j];
        sum += gifts[right] + gifts[left];

        right--;
        left += (w - 1);
    }

    cout << sum << nl;
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