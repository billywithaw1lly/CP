#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fastio               \
    ios::sync_with_stdio(0); \
    cin.tie(0)

void solve()
{
    int n, w;
    cin >> n >> w;
    vector<int> v(n);
    for (auto &x : v)
        cin >> x;

    sort(v.rbegin(), v.rend());

    multiset<int> bins;

    for (int x : v)
    {
        auto it = bins.lower_bound(x); 
        if (it == bins.end())
        {
            bins.insert(w - x);
        }
        else
        {
            int spaceLeft = *it - x;
            bins.erase(it);
            bins.insert(spaceLeft);
        }
    }

    cout << bins.size() << '\n';
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
