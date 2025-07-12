// #include <bits/stdc++.h>
// typedef long long ll;
// using namespace std;

// void solve(){

//     ll n, x, k;
//     cin >> n >> x >> k;
//     string str;
//     cin >> str;

//     ll count = 0;
//     ll i = 0;
//     ll firstStep = 0;

//     if (x == 0) {
//         count++;
//     } else {
//         while (firstStep < k) {
//             if (str[i] == 'L') x--;
//             else x++;

//             firstStep++;
//             i = (i + 1) % n;

//             if (x == 0) {
//                 count++;
//                 break;
//             }
//         }
//     }

//     if (x != 0 || firstStep == k) {
//         cout << count << '\n';
//         return;
//     }

//     // Now x is 0, we restart from i = 0 and count steps to next zero
//     ll steps = 0;
//     i = 0;

//     while (steps + firstStep < k) {
//         if (str[i] == 'L') x--;
//         else x++;

//         steps++;
//         i = (i + 1) % n;

//         if (x == 0) break;
//     }

//     if (x != 0 || steps + firstStep > k) {
//         cout << count << '\n';
//         return;
//     }

//     ll remaining = k - firstStep;
//     ll repeatCount = (remaining) / steps;

//     count += repeatCount;

//     cout << count << '\n';

//     // ll n, x, k;
//     // cin >> n >> x >> k;
//     // string str;
//     // cin >> str;

//     // ll count = 0;
//     // ll firstStep = 0;

//     // if (x == 0) {
//     //     count++;
//     // }

//     // else{
//     //     int i = 0;
//     //     while(k > 1){

//     //         if(str[i] == 'L'){
//     //             firstStep++;
//     //             x-=1;
//     //             i++;
//     //             //cout<<x<<endl;
//     //             if(x == 0){
//     //                 count++;
//     //                 break;
//     //             }
                
//     //         }
//     //         else{
//     //             firstStep++;
//     //             x+=1;
//     //             i++;
//     //             //cout<<"x-> "<<x<<endl;
//     //             if(x == 0){
//     //                 count++;
//     //                 break;
//     //             }
//     //         }

//     //     }

//     // }

//     // // cout<<endl;
//     // // cout<<"sec loop"<<endl;
//     // // cout<<endl;

//     // // now we know the first steps required;
//     // ll req = k - firstStep;

//     // ll steps = 0;

//     // ll i = 0;
//     // while(req > 1){

//     //     if(str[i] == 'L'){
//     //         steps++;
//     //         x-=1;
//     //         //cout<<x<<endl;
//     //         req--;
//     //         i++;
//     //         if(x == 0){
//     //             break;
//     //         }
            
//     //     }
//     //     else{
//     //         steps++;
//     //         x+=1;
//     //         //cout<<"x-> "<<x<<endl;
//     //         req--;
//     //         i++;
//     //         if(x == 0){
//     //             break;
//     //         }
//     //     }


//     // }

//     // ll ans = 0;

//     // if (steps > 0 )
//     // ans = 1 +  (k - firstStep) / steps;
//     // else
//     // ans = 1;

//     // cout<<ans<<endl;


//     // ll i = 0;
//     // ll first_zero_step = -1;
//     // ll cycle_length = 0;
//     // ll original_x = x;
//     // map<ll, ll> visited;

//     // for (ll step = 0; step < k; step++) {
//     //     if (str[i] == 'L') x--;
//     //     else x++;

//     //     i = (i + 1);

//     //     if (x == 0) {
//     //         count++;
//     //         if (first_zero_step == -1) {
//     //             first_zero_step = step + 1;
//     //             original_x = 0;
//     //         } else {
//     //             cycle_length = step + 1 - first_zero_step;
//     //             break;
//     //         }
//     //     }

//     //     if (i == n) i = 0;
//     // }

//     // if (cycle_length > 0 && k > first_zero_step) {
//     //     ll remaining_steps = k - first_zero_step;
//     //     count += remaining_steps / cycle_length;
//     // }

//     // cout << count << '\n';
// }

// int main(){
//     ios::sync_with_stdio(0);
//     cin.tie(nullptr);
//     int t; cin >> t;
//     while (t--) solve();
// }


#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

void solve() {
    ll n, x, k;
    cin >> n >> x >> k;
    string str;
    cin >> str;

    for (int i = 0; i < n && k > 0; ++i) {
        x += (str[i] == 'L' ? -1 : 1);
        --k;
        if (x == 0) break;
    }

    ll ans = 0;

    if (x == 0) {
        ans = 1;

        for (int i = 0; i < n; ++i) {
            x += (str[i] == 'L' ? -1 : 1);
            if (x == 0) {
                ans += k / (i + 1);  // Add how many full cycles fit in remaining k
                break;
            }
        }
    }

    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
