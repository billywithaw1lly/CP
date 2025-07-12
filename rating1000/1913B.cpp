#include <bits/stdc++.h>

using namespace std;

void solve(){
    string s;
    cin>>s;

    int S0 = 0;
    int S1 = 0;
    int l = s.size();

    for(int i = 0; i < l; i++){
        if(s[i] == '0')
        S0++;
        if(s[i] == '1')
        S1++;
    }
    int res = 0;
    if(S0 == S1)
    cout<<"0"<<endl;
    else
    {
        for(int i = 0; i < l; i++){
            if (s[i] == '0') {
                if(S1 == 0){
                    res = l - i;
                    break;
                }
                S1--;
            } 
            if (s[i] == '1') {
                if(S0 == 0){
                    res = l - i;
                    break;
                }
                S0--;
            } 
        }
        // cout<<abs(S0 - S1)<<endl;
        cout << res << endl;
    }
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