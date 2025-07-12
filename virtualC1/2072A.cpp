#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n,k,p;
    cin>>n>>k>>p;

    int limit = abs(p * n);

    if(abs(k) > limit){
        cout<<"-1\n";
        return;
    }
    else{
        if (k == 0){
            cout<<"0\n";
            return;
        }
        else{
            if( abs(k) % p == 0)
            {
                int ans =abs( k ) / p;
                if(ans <= n){
                    cout<<ans<<endl;
                    return;
                }
            }
            else{
                int ans = (abs(k) / p )+ 1;
                if(ans <= n){
                    cout<<ans<<endl;
                    return;
                }
            }
        }
    }
}

int main(){
    int t; cin>>t;

    while(t--){
        solve();
    }
    return 0;
}