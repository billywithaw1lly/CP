#include <bits/stdc++.h>
using namespace std;


typedef long long ll;

void solve(){
    ll n,x;
    cin>>n>>x;
    ll maxx = -1e9;
    ll sumwater = x;

    vector<ll> height(n, 0);

    for(int i = 0; i < n; i++){
        cin>>height[i];
        maxx = max(height[i], maxx);
        sumwater += height[i];
    } 

    ll sum = 0;
    while(true){

    }


}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--)
    solve();
    return 0;
}