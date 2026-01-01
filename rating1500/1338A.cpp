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

// vi twos;
// void fact(){
//     twos.pb(1);

//     ll pre = 1;
//     for(ll i = 1; i < 31 ; i++){
//         ll temp = 2 << i;
//         pre += temp;
//         twos.pb(pre);
//     }
// }

void solve()
{
    int n;
    cin >> n;
    vll a(n);
    for (auto &x : a)
        cin >> x;

    ll ans = 0;

    for (int i = 1; i < n; i++)
    {
        if (a[i] < a[i - 1])
        {
            ll diff = a[i - 1] - a[i];
            ll need = 0;
            while ((1LL << need) <= diff)
                need++;
            ans = max(ans, need);
            a[i] = a[i - 1];
        }
    }

    cout << ans << "\n";
}

int main()
{
    fastio;
    //fact();
    int t;
    cin >> t;

    for (T = 1; T <= t; T++)
    {
        solve();
    }

    return 0;
}