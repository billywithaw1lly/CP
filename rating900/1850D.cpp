#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr.begin(), arr.end());
    int count = 1, ans = -1;
    if (n > 1)
    {
        for (int i = 1; i < n; i++)
        {
            if (arr[i] - arr[i - 1] > k)
                count = 1;
            else
                count++;

            ans = max(ans, count);
        }
        cout << n - ans << "\n";
    }
    else
        cout << "0\n";
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