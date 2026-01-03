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

const ll mod = 1e9 + 7;
const int MAXN = 40005;

int arr[MAXN];
ll dp[MAXN];

void precompute()
{
    memset(dp, 0, sizeof(dp));
    dp[0] = 1;

    for (int i = 1; i <= 40000; i++)
    {
        string s = to_string(i);
        string rev = s;
        reverse(rev.begin(), rev.end());

        if (rev == s)
            arr[i] = i;
        else
            arr[i] = -1;

        if (arr[i] != -1)
        {
            int p = arr[i];
            for (int j = p; j <= 40000; j++)
            {
                dp[j] = (dp[j] + dp[j - p]) % mod;
            }
        }
    }
}

void solve()
{
    int n;
    cin >> n;
    cout << dp[n] << nl;
}

int main()
{
    fastio;
    precompute();
    int t;
    cin >> t;
    for (T = 1; T <= t; T++)
    {
        solve();
    }

    return 0;
}