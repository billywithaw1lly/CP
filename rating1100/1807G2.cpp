#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    ll n; cin>>n;
    
    vector<ll> arr(n);

    for(int i = 0 ; i < n; i++){
        cin>>arr[i];
    }

    sort(arr.begin(), arr.end());
    if(arr[0] != 1) {
        cout << "NO\n";
        return;
    }

    ll sum = arr[0];
    for(int i = 1; i < n; ++i) {
        if(sum < arr[i]) {
            cout << "NO\n";
            return;
        }
        sum += arr[i];
    }
    cout << "YES\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--)
    solve();

    return 0;
}