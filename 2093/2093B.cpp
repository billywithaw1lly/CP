#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

void solve(){
    string n; cin>>n;

    int len = n.length();

    int ans = len - 1;
    // reverse(n.begin(), n.end());

    int ind = len-1;

    for(int i = len - 1; i >= 0; i--){
        if(n[i] == '0'){
            //ans--;
            ind = i;
        }
        else
        break;
    }
    for(int i = 0; i < ind; i++){
        if(n[i] == '0')
        ans--;
    }
    cout<<ans<<endl;
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