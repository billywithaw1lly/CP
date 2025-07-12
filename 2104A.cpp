#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    ll a, b, c;
    cin>>a>>b>>c;

    ll ans1 = (a + b +  c) / 3;
    ll ans2 = (a + b + c) % 3;

    if (ans1 >= b && ans2 == 0)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
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