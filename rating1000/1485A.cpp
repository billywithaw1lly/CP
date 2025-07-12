#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

void solve(){
    ll a,b;
    cin>>a>>b;
    ll countM = LLONG_MAX;

    if (a == b) {
        cout << "2\n";
        return;
    }
    
    else if (a < b)
    cout<<"1\n";
    
    else{
        ll count = 0;
        ll copy = a;
        for (ll i = max(b, (ll)2); i <= max(b, (ll)2) + 30; i++) {
            ll count = 0; 
            ll copy = a; 
            while(copy > 0){
                copy = copy / i;
                count++;
            }
            count += i - b;
            countM = min(count, countM);
        }
        cout<<countM<<endl;
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