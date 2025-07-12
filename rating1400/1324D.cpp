#include <bits/stdc++.h>
using namespace std;

#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

int main()
{
    fastio;
    int n;
    cin >> n;
    vector<int> a(n), b(n), diff(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];

    for (int i = 0; i < n; i++)
        diff[i] = a[i] - b[i];

    sort(diff.begin(), diff.end());

    long long ans = 0;

    for (int i = 0; i < n; i++)
    {
        if (diff[i] <= 0)
            continue;
            
        int idx = lower_bound(diff.begin(), diff.begin() + i, -diff[i] + 1) - diff.begin();
        ans += (i - idx);
    }

    cout << ans << '\n';
    return 0;
}
