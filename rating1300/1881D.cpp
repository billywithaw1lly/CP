#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

void solve()
{
    int n; cin>>n;
    vector<int> v(n);

    for(int i = 0; i < n; i++) cin>>v[i];

    map<int, int> mp;
    for(int i = 0 ; i < n; i++){
        for(int j = 2; j * j <= v[i]; j++){
            while(v[i] % j == 0){
                mp[j]++;
                v[i] /= j;
            }
        }
        if(v[i] > 1){
            mp[v[i]]++;
        }
    }
    int flag = 1;
    for(auto it : mp){
        if(it.second % n != 0){
            flag = 0;
            break;
        }
    }

    if(flag)
    cout<<"YES\n";
    else
    cout<<"NO\n";

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
