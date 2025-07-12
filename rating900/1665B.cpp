#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr.begin(), arr.end());

    ll countMax = 1;
    ll count = 1;

    // Find the most frequent element
    for (int i = 1; i < n; i++)
    {
        if (arr[i] == arr[i - 1])
            count++;
        else
        {
            countMax = max(count, countMax);
            count = 1;
        }
    }
    countMax = max(count, countMax); // Final update

    ll operations = 0;
    ll remaining = n - countMax;

    // Doubling strategy
    while (remaining > 0)
    {
        operations++; // Copy the most frequent element once
        ll add = min(remaining, countMax); // At most, we can double its count
        remaining -= add;
        countMax += add; // New size of the dominant element
        operations += add; // Each new element added counts as an operation
    }

    cout << operations << "\n";
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