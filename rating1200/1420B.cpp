#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define fastread                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);

void solve()
{
    fastread;
    int n;
    cin >> n;

    vector<int> v(n);

    for(auto &s : v) cin>>s;

    int cnt = 0;

    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if( (v[j] & v[i]) >= (v[j] ^ v[i]) )
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return;
            
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
