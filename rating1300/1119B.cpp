#include <bits/stdc++.h>
using namespace std;

int n, H;
vector<int> a;

bool can(int k)
{
    vector<int> temp(a.begin(), a.begin() + k);
    sort(temp.rbegin(), temp.rend());
    long long sum = 0;
    for (int i = 0; i < k; i += 2)
        sum += temp[i];
    return sum <= H;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> H;
    a.resize(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int lo = 0, hi = n, ans = 0;
    while (lo <= hi)
    {
        int mid = (lo + hi) / 2;
        if (can(mid))
        {
            ans = mid;
            lo = mid + 1;
        }
        else
            hi = mid - 1;
    }

    cout << ans << "\n";
    return 0;
}
