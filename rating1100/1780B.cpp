#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    ll n;
    cin >> n;
    vector<ll> arr(n);
    ll sum = 0;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    ll temp = 0;
    ll ans = 0;

    // for (int i = 2; i <= n; i++) {
    //     if (sum % i == 0) {
    //         ll target = sum / i;
    //         ll tempsum = 0;
    //         ll count = 0;

    //         for (int j = 0; j < n; j++) {
    //             tempsum += arr[j];

    //             if (tempsum == target) {
    //                 count++;
    //                 tempsum = 0;
    //             } else if (tempsum > target) {
    //                 break;
    //             }
    //         }

    //         if (count == i) {
    //             cout << target << '\n';
    //             return;
    //         }
    //     }
    // }

    // cout << 1 << '\n';

    for(int i=0;i<n-1;i++){
        temp+=arr[i];
        ans=max(ans,gcd(sum-temp,temp));
    }
    cout<<ans<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
