#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n; cin>>n;
    string str; cin>>str;

    int ans = 0;
    
    int count = 0;

    for(int i = 0; i < n; i++){
        if(str[i] == ')'){
            count--;
            if(count < 0){
                ans++;
                count = 0;
            }
        }
        if(str[i] == '(')
        count++;
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