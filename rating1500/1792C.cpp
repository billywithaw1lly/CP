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

void solve()
{
    int n;
    cin >> n;
    vpii a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first;
        a[i].second = i;
    }

    sort(a.begin(), a.end());

    int l, r;
    int cnt = 0;

    if (n % 2 == 1)
    {
        l = (n / 2) + 1;
        r = (n / 2) + 1;
        cnt = 1;
    }
    else
    {
        l = n / 2;
        r = (n / 2) + 1;

        if (a[l - 1].second < a[r - 1].second)
        {
            cnt = 2;
        }
        else
        {
            cnt = 0;
        }
    }

    while (cnt > 0 && l > 1 && r < n)
    {
        l--;
        r++;

        int pos_curr_l = a[l - 1].second;
        int pos_next_l = a[l].second;

        int pos_prev_r = a[r - 2].second;
        int pos_curr_r = a[r - 1].second;

        if (pos_curr_l < pos_next_l && pos_prev_r < pos_curr_r)
        {
            cnt += 2;
        }
        else
        {
            break;
        }
    }
    cout << (n - cnt) / 2 << nl;
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