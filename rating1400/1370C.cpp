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

bool isPrime(ll x)
{
    if (x < 2)
        return false;
    for (ll i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
            return false;
    }
    return true;
}

void solve()
{
    ll n;
    cin >> n;
    if (n == 1)
    {
        cout << "FastestFinger\n";
        return;
    }
    if (n % 2 == 1)
    {
        cout << "Ashishgup\n";
        return;
    }
    ll temp = n;
    int cnt2 = 0;
    while (temp % 2 == 0)
    {
        temp /= 2;
        cnt2++;
    }
    if (temp == 1)
    {
        if (cnt2 == 1)
            cout << "Ashishgup\n";
        else
            cout << "FastestFinger\n";
        return;
    }
    if (cnt2 == 1)
    {
        if (isPrime(temp))
            cout << "FastestFinger\n";
        else
            cout << "Ashishgup\n";
        return;
    }
    cout << "Ashishgup\n";
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