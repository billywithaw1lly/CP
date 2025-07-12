#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastread                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);

#define f(i, a, b) for (int i = a; i < b; i++)
#define pb push_back

void solve()
{
    fastread;
    ll n; cin>>n;
    vector<int> a(n + 1);          // 1-based indexing
    vector<int> pos(2 * n + 1, 0); // pos[value] = index

    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
        pos[a[i]] = i;
    }
    int count = 0;
    for (int i = 1; i <= n; ++i)
    {
        int ai = a[i];
        for (int k = 1; k * ai - i <= n; ++k)
        {
            int j = k * ai - i;
            if (j > i && pos[k] == j)
            {
                count++;
            }
        }
    }
    cout << count << "\n";
}

int main()
{
    fastread;
    ll t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
