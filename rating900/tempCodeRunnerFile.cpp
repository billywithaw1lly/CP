#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    if (n <= 2)
    {
        ll limit = (n * k);
        ll arr[limit + 1];

        for (ll i = 1; i < limit + 1; i++)
            cin >> arr[i];

        ll first;

        if (n % 2 == 0)
            first = n / 2;
        else
            first = n / 2;

        ll sum = 0;

        for (int i = first; i < limit + 1; i += n)
        {
            // cout << arr[i] << " ";
            sum += arr[i];
        }
        // cout << "\n";
        // sum += arr[i];

        cout << sum << "\n";
    }
    else
    {
        ll first, inc;
        if (n % 2 == 0)
        {
            first = n / 2;
            inc = first + 1;
        }

        else
        {
            first = (n + 1) / 2;
            inc = first;
        }

        ll limit = (n * k);
        ll arr[limit];

        ll sum = 0;

        for (ll i = 0; i < limit ; i++)
            cin >> arr[i];
        for (ll i = k ; i < limit; i += (inc))
        {
            // cout << arr[i] << " ";
            sum += arr[i];
        }
        // cout << "\n";

        cout << sum << "\n";
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}