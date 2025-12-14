#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define fastread                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);

using vi = vector<int>;
using vvi = vector<vector<int>>;
using vii = vector<pair<int, int>>;
using vll = vector<pair<ll, ll>>;

const int MOD = 1000000;
const int N = 2e5 + 1;

int T;

void solve()
{
    int n; cin >>n;
    int k; cin >>k;

    if(k % 2 == 0){
        for(int i = 1; i <= n - 2; i++)
            cout << n - 1 << " ";
            cout << n << " ";
            cout << n - 1 << "\n";
    } else {
        for (int i = 1; i <= n - 1; i++)
        cout << n << " ";
        cout << n - 1 << "\n";
    }
}

int main()
{
    fastread;
    int t;
    cin >> t;

    for(T = 1; T <= t; T++)
        solve();

    return 0;
}
