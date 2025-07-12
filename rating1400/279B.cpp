#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define fastread                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);

// int binSearch(vector<ll> &pmax, int n, int val)
// {
//     int low = 0, high = n - 1;
//     int ans = -1;

//     while (low <= high)
//     {
//         int mid = (low + high) / 2;
//         if (pmax[mid] <= val)
//         {
//             ans = mid;
//             low = mid + 1;
//         }
//         else
//         {
//             high = mid - 1;
//         }
//     }
//     return ans;
// }

int main()
{
    fastread;
    int n, t;
    cin >> n >> t;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    int r = 0;
    int sm = 0;
    int ans = 0;
    for (int i = 0; i < n; ++i)
    {
        while (r < n && sm + v[r] <= t)
        {
            sm += v[r];
            ++r;
        }
        ans = max(ans, r - i);
        sm -= v[i];
    }

    cout << ans << '\n';
    return 0;
}
