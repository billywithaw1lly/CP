#include <bits/stdc++.h>

using namespace std;

void solve(){
    int t; cin>>t;

    while(t--){
        int n, a, b;
        cin>>n>>a>>b;

        if((a == n &&  b == n) || (a+b+2<= n))
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();
    return 0;
}