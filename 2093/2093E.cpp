#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    map<int, int> freq;
    vector<int> a(n);
    for (int &x : a)
    {
        cin >> x;
        freq[x]++;
    }
    int low = 0, high = n + 1, ans = 0;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        int count = 0;
        for (int i = 0; i < mid; i++)
        {
            count += freq[i];
        }
        if (count >= k * mid)
        {
            ans = mid;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    cout << ans << '\n';
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}