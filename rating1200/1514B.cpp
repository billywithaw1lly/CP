#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const long long MOD = 1e9 + 7;
#define fastread                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);

void solve()
{
    fastread;
    ll n,k;
    cin>>n>>k;
    ll ans = 1;
    for (int i = 0; i < k; i++)
        ans = (ans * n) % MOD;

    cout<<ans<<endl;
    return;
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
