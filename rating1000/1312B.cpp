#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    ll n;
    cin>>n;
    vector<ll> arr(n);

    for(int i = 0; i < n; i++)
    cin>>arr[i];

    sort(arr.rbegin(), arr.rend());

    for(int i = 0; i < n; i++)
    cout<<arr[i]<<" ";
    cout<<endl;    
}
int main(){
    ll t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}