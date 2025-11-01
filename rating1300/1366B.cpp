#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr)

void solve()
{
    fastio;
    int n, x, m;
    cin>>n>>x>>m;

    int p1 = x, p2 = x;
    for(int i = 0; i < m; i++){

        int l,r; cin>>l>>r;
        if(r>= p1 && l <= p2){
            p1 = min(p1, l);
            p2 = max(p2, r);
        }
    }
    cout<<(p2 - p1 + 1)<<endl;
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