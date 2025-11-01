#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define fastread                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);

using vi = vector<int>;
using vvi = vector<vector<int>>;

const int MOD = 1e7 + 9;
const int N = 2e5 + 1;
ll dp[N][3][3];

void solve()
{
    int n;
    cin >> n;
    vi arr(n);
    for (auto &it : arr)
        cin >> it;

    bool has_even = false, has_odd = false;
    for (int a : arr)
    {
        if (a % 2 == 0)
            has_even = true;
        else
            has_odd = true;
    }

    if (has_even && has_odd)
        sort(arr.begin(), arr.end());

    for (int a : arr)
        cout << a << " ";
    cout << "\n";
}

int main()
{
    fastread;
    int t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}
