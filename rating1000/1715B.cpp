#include <bits/stdc++.h>
typedef long long  ll;
using namespace std;

void solve(){
    ll n, k, b, s;

    cin>>n>>k>>b>>s;

    vector <ll> a(n);
    a[0] = k * b;
    if( s >= (k * b) && s <= ((k * b) + (k - 1) * n)){
        s = s - a[0];
        for(int i = 0; i < n; i++){
            
            ll temp = min(s, (k-1));
            a[i] += temp;
            s -= temp;
        }
        for(int i = 0; i < n; i++)
        cout<<a[i]<<" ";
        cout<<endl;
    }
    else{
        cout<<"-1\n";
    }
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
}