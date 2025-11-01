#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr)

void solve()
{
    fastio;
    int n; cin>>n;
    vector <int> p(n);

    for(auto &it: p) cin>>it;

    vector<int> ans;

    for (int i = 0; i < n; i++)
    {
        if (i == 0 || i == n - 1 || (p[i - 1] < p[i]) != (p[i] < p[i + 1]))
            ans.push_back(p[i]);
    }
    cout<<ans.size();
    for (int i : ans)
        cout<<" "<<i;
    cout<<endl;
    return;
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