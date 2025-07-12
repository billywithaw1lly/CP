#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD = 1e9 + 7;

void solve(){
    ll n; cin>>n;
    vector <ll> a(n);
    vector <ll> b(n);

    for(int i = 0; i < n; i++) cin>>a[i];
    for(int i = 0; i < n; i++) cin>>b[i];

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    ll j = 0;
    ll i = 0;
    ll count = 0;

    ll pro = 1;
    ll temp = 0;
    while(i < n){
        if(a[i] > b[j] && j < n ){
            j++;
            count++;
        }
        else{
            pro = (pro * (count - temp)) % MOD;
            temp++;
            i++;
        }
    }
    cout<<pro<<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
