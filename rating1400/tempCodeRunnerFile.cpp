#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr)
#define nl "\n"
using vi = vector<int>;
using vvi = vector<vector<int>>;
using vii = vector<pair<int, int>>;
using vll = vector<pair<ll, ll>>;

int T;

void solve()
{
    long long n;
    cin >> n;

    if (n % 2 == 1 && n != 1)
    {
        cout << "Ashishgup\n";
        return;
    }

    int cntOdd = 0;
    int cntEven = 0;
    while (n % 2 == 0)
    {
        cntEven++;
        n /= 2;
    }

    for (ll i = 3; i * i <= n; i += 2)
    {
        while (n % i == 0)
        {
            cntOdd++;
            n /= i;
        }
    }

    if (n > 1){
        cntOdd++;
    }
    //cout << "Odd factors: " << cntOdd << ", Even factors: " << cntEven << "\n";

    if ((cntOdd % 2 == 1 && cntEven != 1) || (cntOdd % 2 == 0 && cntEven == 1))
        cout << "Ashishgup\n";
    else
        cout << "FastestFinger\n";
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