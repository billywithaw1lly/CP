#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastread                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);

#define f(i, a, b) for (int i = a; i < b; i++)
#define pb push_back

void solve()
{
    ll n; char c;
    cin >> n >> c;
    string s; cin>>s;

    vector<int> ans;
    bool ok = true;
    for (auto x : s)
    {
        if (x != c)
        {
            ok = false;
        }
    }
    if (!ok)
    {
        f(i, 1, n + 1)
        {
            ok = true;
            f(j, i, n + 1)
            {
                ok &= (s[j - 1] == c);
                j += i - 1;
            }
            if (ok)
            {
                ans.pb(i);
                break;
            }
        }
        if (!ok)
        {
            ans.pb(n);
            ans.pb(n - 1);
        }
    }
    cout << ans.size() << "\n";
    for (auto x : ans)
    {
        cout << x << " ";
    }
    cout << "\n";
}

int main()
{
    fastread;
    ll t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
