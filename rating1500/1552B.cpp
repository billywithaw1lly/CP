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
    cin >> n;
    vvi a(n, vi(5));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> a[i][j];
        }
    }

    int ans = 0; 
    for (int i = 1; i < n; i++)
    {
        int wins_for_ans = 0;
        for (int j = 0; j < 5; j++)
        {
            if (a[ans][j] < a[i][j])
            {
                wins_for_ans++;
            }
        }
        if (wins_for_ans < 3)
        {
            ans = i;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (i == ans)
            continue;

        int wins_for_ans = 0;
        for (int j = 0; j < 5; j++)
        {
            if (a[ans][j] < a[i][j])
            {
                wins_for_ans++;
            }
        }
        if (wins_for_ans < 3)
        {
            cout << -1 << nl;
            return;
        }
    }
    cout << ans + 1 << nl;
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