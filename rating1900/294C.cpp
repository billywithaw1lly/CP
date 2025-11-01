#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr)

const int MOD = 1000000007;
const int MAX_N = 1005;
ll fact[MAX_N];

ll modpow(ll base, ll exp)
{
    ll res = 1;
    base %= MOD;
    while (exp > 0)
    {
        if (exp & 1)
            res = (res * base) % MOD;
        base = (base * base) % MOD;
        exp >>= 1;
    }
    return res;
}

ll modinv(ll n)
{
    return modpow(n, MOD - 2);
}

void facto(int n)
{
    fact[0] = 1;
    for (int i = 1; i <= n; i++)
        fact[i] = (fact[i - 1] * i) % MOD;
}

int main()
{
    fastio;

    int n, m;
    cin >> n >> m;

    vector<int> on(m);
    for (auto &it : on)
        cin >> it;
    sort(begin(on), end(on));

    vector<int> gap;
    ll iw = 1, totalOff = 0;

    int start = on[0] - 1;
    if (start > 0)
    {
        gap.push_back(start);
        totalOff += start;
    }

    for (int i = 0; i < m - 1; i++)
    {
        int internal = on[i + 1] - on[i] - 1;
        if (internal > 0)
        {
            gap.push_back(internal);
            totalOff += internal;
            iw = (iw * modpow(2, internal - 1)) % MOD;
        }
    }

    int endgap = n - on[m - 1];
    if (endgap > 0)
    {
        gap.push_back(endgap);
        totalOff += endgap;
    }

    if (totalOff == 0)
    {
        cout << "1\n";
        return 0;
    }

    facto(totalOff);

    ll ways = fact[totalOff];
    for (int size : gap)
    {
        ways = (ways * modinv(fact[size])) % MOD;
    }

    ll totalways = (ways * iw) % MOD;
    cout << totalways << "\n";

    return 0;
}
