#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

void solve(){
    int t; cin>>t;
    while(t--){
        ll x, n; 
        cin>>x>>n;
        ll result;
        if(x % 2 != 0 ){
            ll sum = n % 4;
            if (sum == 1)
            result = x + n;
            else if (sum == 2)
            result = x - 1;
            else if (sum == 3)
            result = x - 1 - n;
            else 
            result = x;
        }
        else{
            ll sum = n % 4;
            if (sum == 1)
            result = x - n;
            else if (sum == 2)
            result = x + 1;
            else if (sum == 3)
            result = x + 1 + n;
            else 
            result = x;
        }
        cout<<result<<"\n";
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}