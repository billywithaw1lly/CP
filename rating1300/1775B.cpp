#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

void solve(){
    int n; cin>>n;
    
    map<int, int> mp;

    vector<vector<int>> v;

    for(int i = 0; i < n; i++){
        int x; cin>>x;

        vector<int> temp(x);

        for(int j = 0; j < x; j++){
            cin>>temp[j];
            mp[temp[j]]++;
        }
        v.push_back(temp);
    }

    string ans = "NO\n";

    for(int i = 0; i < n; i++){
        int f = 1;
        for(auto it: v[i]){
            if(mp[it] == 1){
                f = 0;
                break;
            }
        }
        if(f){
            ans = "YES\n";
            break;
        }
    }
    cout<<ans<<endl;

    return;
}

int main(){
    int t; cin>>t;

    while(t--)
    solve();

    return 0;
}