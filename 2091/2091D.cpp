#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    ll n, m, k;
    cin>>n>>m>>k;
    ll total = m * n;
    ll value = (total - k) / n;
    if( value == 0)
    cout<<m<<endl;
    else{
        cout<< m / (value + 1) << endl;
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