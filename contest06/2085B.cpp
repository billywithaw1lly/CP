#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

void solve (){
    int n; cin>>n;
    vector<int> a(n);
    for(int i = 0 ; i < n; i++){
        cin>>a[i];
    }

    bool has1 = 0, has2 = 0;
    has1 |= a[0] == 0 || a[1] == 0;
    for(int i = 2; i < n; i++)
    has2 |= a[i] == 0;

    int len = n;

    vector<pair<int, int>> ans;
    if(has2){
        ans.push_back({2, n});
        len -= n - 2 - 1;
    }
    if(has1){
        ans.push_back({0, 2});
        len -= 1;
    }
    ans.push_back({0, len});
    cout<<ans.size()<<'\n';
    for(auto [x, y] : ans)
    cout<< x+1 << ' ' << y << '\n';

}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}