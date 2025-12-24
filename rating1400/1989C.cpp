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
void solve()
{
    int n;
    cin >> n;
    vi a(n);
    for (auto &it : a)
        cin >> it;
    vi b(n);
    for (auto &it : b)
        cin >> it;

    ll sumA = 0;
    ll sumB = 0;

    int pos = 0;
    int neg = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] > b[i])
        {
            sumA += a[i];
        }
        else if (b[i] > a[i])
        {
            sumB += b[i];
        }
        else
        {
            if (a[i] == 1)
                pos++;
            if (a[i] == -1)
                neg++;
        }
    }
    while (pos > 0)
    {
        if (sumA < sumB)
            sumA++;
        else
            sumB++;
        pos--;
    }
    while (neg > 0)
    {
        if (sumA > sumB)
            sumA--;
        else
            sumB--;
        neg--;
    }

    cout << min(sumA, sumB) << nl;
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