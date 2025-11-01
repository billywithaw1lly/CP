#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define fastread                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);

using vi = vector<int>;
using vl = vector<ll>;
using vvi = vector<vector<int>>;
using vii = vector<pair<int, int>>;
using vll = vector<pair<ll, ll>>;

const int MOD = 1000000;
const int N = 2e5 + 1;
ll dp[N][3][3];

void solve()
{
    int n;
    ll X;
    cin >> n >> X;

    vl prices(n);
    for (int i = 0; i < n; i++)
    {
        cin >> prices[i];
    }

    sort(prices.begin(), prices.end());

    ll S = 0;
    ll bonus = 0;
    vl result;

    for (int i = 0; i < n; i++)
    {
        ll price = prices[i];
        ll new_S = S + price;
        ll old_loyalty = S / X;
        ll new_loyalty = new_S / X;

        if (new_loyalty > old_loyalty)
        {
            bonus += price;
        }

        result.push_back(price);
        S = new_S;
    }

    cout << bonus << "\n";
    for (int i = 0; i < n; i++)
    {
        if (i > 0)
            cout << " ";
        cout << result[i];
    }
    cout << "\n";
}

int main()
{
    fastread;
    int t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}