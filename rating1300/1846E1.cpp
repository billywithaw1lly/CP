#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

int main()
{
    fastio

    vector<int> isPossible(1e6 + 1, 0);
    for (ll i = 2; i <= 10000; i++)
    {
        ll current = i * i * i;
        ll current1 = (current - 1) / (i - 1);

        while (current1 <= 1e6)
        {
            isPossible[current1] = 1;
            current *= i;
            current1 = (current - 1) / (i - 1);
        }
    }

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        if (isPossible[n])
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}
