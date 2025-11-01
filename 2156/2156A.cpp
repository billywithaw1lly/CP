#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define fastread                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);

using vi = vector<int>;
using vvi = vector<vector<int>>;

const int MOD = 1e7 + 9;

ll n;
string s;
const int N = 2e5 + 1;
ll dp[N][3][3];

void solve(){
    ll n; cin >> n;
    ll cp = n;

    ll ans = 0;

    if(cp <= 2){
        cout << "0\n";
        return;
    }

    while(cp >= 3){
        int mod = cp % 3;

        if(mod == 0){
            ans += cp / 3;
            cp /= 3;
        } else if( mod == 1){
            ans += cp / 3;
            cp = (cp / 3) + 1;
        } else {
            ans += cp / 3;
            cp = (cp / 3) + 2;
        }
    }

    cout << ans << endl;
    return;

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
