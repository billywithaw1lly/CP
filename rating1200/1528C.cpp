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
    ll n; string s;
    cin >> n >> s;

    int ans = n + 1;
    for (int c = 0; c < 26; ++c)
    {
        int l = 0, r = n - 1, cnt = 0;
        while (l <= r)
        {
            if (s[l] == s[r]){l++, r--;}
            else if (s[l] == char('a' + c)){cnt++, l++;}
            else if (s[r] == char('a' + c)){ cnt++, r--; }
            else { cnt = n + 1; break;}
        }
        ans = min(ans, cnt);
    }
    if (ans == n + 1)
        ans = -1;
    cout << ans << '\n';

    // ll l = 0; ll r = n - 1; ll ans = n + 1; ll count = 0;

    // for (int i = 0; i < 26; i++)
    // {
    //     while (l <= r)
    //     {
    //         if (s[l] == s[r]){ l++;r--;}
    //         else if (s[l] == char('a' + i)){count++;l++;}
    //         else if (s[r] == char('a' + i)){count++;r--;}
    //         else{ count = n + 1; break; }
    //     }
    //     ans = min(count, ans);
    // }
    // if (ans == n + 1) ans = -1;
    // cout << ans << endl; return;
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
