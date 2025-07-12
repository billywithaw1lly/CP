#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    ll n, k;
    cin>>n>>k;
    
    vector <ll> left(n);
    vector <ll> right(n);

    for(int i = 0; i < n; i++) cin>>left[i];
    for(int i = 0; i < n; i++) cin>>right[i];
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    int t; cin>>t;

    while(t--){
        solve();
    }
    return 0;
}