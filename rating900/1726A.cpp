#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

void solve(){
    int n; cin>>n;
    vector<ll> arr(n);

    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    ll ans = arr[n-1] - arr[0];

    for(int i = 1; i < n; i++)
    ans = max(ans, (arr[i] - arr[0]));

    for(int i = 0; i < n - 1; i++)
    ans = max(ans, (arr[n-1] - arr[i]));

    for(int i = 0; i < n - 1; i++)
    ans = max(ans, (arr[i] - arr[i + 1]));

    cout<<ans<<"\n";

}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; 
    cin >> t;
    while (t--) {
        solve(); 
    }

    return 0;
}