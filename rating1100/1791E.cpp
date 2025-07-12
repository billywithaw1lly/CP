#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    ll n; cin>>n;
    vector <ll> arr(n);

    ll minValue = 1e9;
    bool zero = false;
    ll count = 0;
    ll sum = 0;
    
    for(int i = 0; i < n; i++){
        cin>>arr[i];
        minValue = min(minValue, ll(abs(arr[i])));
        if (arr[i] == 0) zero = true;
        if(arr[i] < 0) count++;
        sum += abs(arr[i]);
    }
    // cout<<sum<<endl;
    // cout<<minValue<<endl;

    if(count%2 == 0){
        cout<<sum<<endl;
    }
    else{
        if(zero){
            cout<<sum<<endl;
        }
        else
        cout<<sum- 2 * minValue<<endl;
    }
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