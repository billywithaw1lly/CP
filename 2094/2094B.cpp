#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

void solve(){
    ll n, m, l, r;
    cin>>n>>m>>l>>r;

    if(m < r){
        cout<<"0 "<<m<<endl;
    }
    else{
        cout<<-(m - r)<<" "<<r<<endl;
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t; cin>>t;
    while(t--){
        solve();
    }
}