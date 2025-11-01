#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

#define MOD 1000000007

int main()
{
    fastio;
    int n, m;
    cin>>n>>m;

    vector <string> s(n);
    for(auto &it : s) cin>>it;

    ll ans = 1;

    for (int j = 0; j < m; j++)
    {
        set<char> ch;
        for (int i = 0; i < n; i++)
        {
            ch.insert(s[i][j]);
        }
        ans = (ans * ch.size()) % MOD;
    }

    cout<<ans<<endl;


    return 0;
}
