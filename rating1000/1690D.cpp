#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void solve(){
    ll n,k; cin>>n>>k;
    string str;
    cin>>str;
    ll wCount = 0;
    
    for (ll i = 0; i < k; i++) {
        if (str[i] == 'W') wCount++;
    }

    ll minn = wCount;

    
    for (ll i = k; i < n; i++) {
        if (str[i - k] == 'W') wCount--; 
        if (str[i] == 'W') wCount++;
        minn = min(minn, wCount);
    }

    cout << minn << '\n';
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