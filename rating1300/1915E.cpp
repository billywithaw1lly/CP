#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

ll n, k;
ll x;
vector<ll> a;
bool check(ll x)
{
    ll moves = 0;
    for (int i = n / 2; i < n; i++)
    {
        if (x - a[i] > 0)
            moves += x - a[i];
        if (moves > k)
            return false;
    }
    if (moves <= k)
        return true;
    else
        return false;
}
int main()
{
    fastio;
    int t; cin>>t;
}
