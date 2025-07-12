#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;

    if(n % 2 == 0)
    {
        cout<<"-1\n";
        return;
    }
    else{
        for(int i = 0; i < n; i+=2)
        cout<<i+1<<" ";
        
        for(int i = 1; i < n; i+=2)
        cout<<i+1<<" ";
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