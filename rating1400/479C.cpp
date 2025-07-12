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

    vector<pair<int, int>> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first;
        cin >> v[i].second;
    }
    sort(v.begin(), v.end());

    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        if (v[i].second >= ans)
            ans = v[i].second;
        else
            ans = v[i].first;
    }
    cout<<ans<<endl;
    return 0;
}
