#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

void solve(){
    ll n; cin>>n;
    set<ll> arr;

    for(int i = 0; i < n; i++){
        ll a;  cin>>a;
        arr.insert(a);
    }

    if(arr.size() == n)
    cout<<"NO\n";
    else
    cout<<"YES\n";

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