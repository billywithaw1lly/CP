#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
        
    vector<int> nextDiff(n, -1);
    for (int i = n - 2; i >= 0; i--)
    {
        if (v[i] != v[i + 1])
            nextDiff[i] = i + 1;
        else
            nextDiff[i] = nextDiff[i + 1];
    }

    int q;
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        int nd = nextDiff[l - 1];
        if (nd != -1 && nd < r)
        {
            cout << l << " " << nd + 1 << "\n";
        }
        else
        {
            cout << -1 << " " << -1 << "\n";
        }
    }
}

int main()
{
    fastio int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
