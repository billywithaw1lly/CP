#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    ll n; cin>>n;
    vector<ll> arr(n);

    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    ll ans = 0;
    ll i = n - 1;

    while (i > 0 && arr[i - 1] == arr[n - 1])
        i--;

    while (i > 0) {
        ans++;
        ll suffix_len = n - i;
        i = max(0LL, i - suffix_len);
        // Now again skip any elements already equal to arr[n-1]
        while (i > 0 && arr[i - 1] == arr[n - 1])
            i--;
    }
    cout << ans << '\n';
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t; cin>>t;

    while(t--)
    solve();

    return 0;
}