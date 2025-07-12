#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    ll n;
    cin >> n;
    vector<ll> arr(n);
    vector<int> pos(1001, -1); // index of last occurrence

    for(int i = 0; i < n; i++){
        cin >> arr[i];
        pos[arr[i]] = i; // update max index for that value
    }

    int ans = -1;
    for(int i = 1; i <= 1000; i++){
        if(pos[i] == -1) continue;
        for(int j = 1; j <= 1000; j++){
            if(pos[j] == -1) continue;
            if(__gcd(i, j) == 1){
                ans = max(ans, pos[i] + pos[j]);
            }
        }
    }

    if(ans == -1) cout << -1 << '\n';
    else cout << ans + 2 << '\n'; // +2 for 1-based indexing
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}