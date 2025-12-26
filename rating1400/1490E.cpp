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
void solve()
{
    int n;
    cin >> n;

    vector<pair<ll, int>> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first;
        a[i].second = i + 1;
    }
    sort(a.begin(), a.end());

    vll pref(n);
    pref[0] = a[0].first;
    for (int i = 1; i < n; i++)
    {
        pref[i] = pref[i - 1] + a[i].first;
    }
    int pos = n - 1;
    for (int i = n - 2; i >= 0; i--)
    {
        if (pref[i] >= a[i + 1].first)
        {
            pos = i;
        }
        else
        {
            break;
        }
    }
    vi winners;
    for (int i = pos; i < n; i++)
    {
        winners.pb(a[i].second);
    }

    sort(winners.begin(), winners.end());

    cout << winners.size() << nl;
    for (int x : winners)
        cout << x << " ";
    cout << nl;
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