#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr)

void solve()
{
    int n, k;
    cin >> n >> k;
    set<int> m;
    int kk = 0;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if (a < k)
            m.insert(a);
        else if (a == k)
            kk++; 
    }
    int ans = max(int(k - m.size()), kk);
    cout << ans << endl;
}

int main()
{
    fastio;
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
