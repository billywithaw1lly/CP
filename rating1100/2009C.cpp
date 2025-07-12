#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    ll x, y, k;
    cin >> x >> y >> k;

    x=(x+k-1)/k;
    y=(y+k-1)/k;

        if(x>y) cout<<2*x-1<<endl;
        else cout<<2*y<<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;

    while(t--) solve();

    return 0;
}