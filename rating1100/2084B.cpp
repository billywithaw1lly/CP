#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

void solve(){
    ll n; cin>>n;

    vector<ll> arr(n);
    for(int i = 0; i < n; i++)
    cin>>arr[i];

    sort(arr.begin(), arr.end());

    ll g = 0;
		for (int i = 0; i < n; ++i) {
			if (i != 0 && arr[i] % arr[0] == 0) {
				g = __gcd(g, arr[i]);
			}
		}
		cout << (g == arr[0] ? "Yes\n" : "No\n");
    
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