// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;

// void solve(){
//     ll n, l, r;
//     cin>>n>>l>>r;
//     vector<ll> gc;
//     ll f = 1;
//     ll a = 1;
//     ll mini = gcd(a,l);
//     a++;
//     gc.push_back(l);
//     if((r - l + 1) >= n){
//         for(int i = l + 1; i <= r; i++){

//             if(f == n)
//             break;

//             ll b = gcd(a,i);
//             if(b > mini){
//                 gc.push_back(i);
//                 mini = b;
//                 a++;
//                 f++;
//             }
//         }
//         if(f==n){
//             cout<<"YES\n";
//             for(int i = 0; i < n; i++)
//             cout<<gc[i]<<" ";
//             cout<<endl;
//         }
//         else
//         cout<<"NO\n";
//     }
//     else
//     cout<<"NO\n";
// }

// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t; cin>>t;

//     while(t--) solve();

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    ll n, l, r;
    cin >> n >> l >> r;

    vector<ll> ans(n + 1); // 1-based index
    set<ll> used_gcds;

    for (int i = 1; i <= n; i++) {
        // Smallest multiple of i ≥ l
        ll val = ((l + i - 1) / i) * i;
        if (val > r) {
            cout << "NO\n";
            return;
        }

        ll g = gcd(i, val);
        if (used_gcds.count(g)) {
            // Try next multiple of i
            bool found = false;
            for (ll j = val + i; j <= r; j += i) {
                g = gcd(i, j);
                if (!used_gcds.count(g)) {
                    val = j;
                    found = true;
                    break;
                }
            }

            if (!found) {
                cout << "NO\n";
                return;
            }
        }

        ans[i] = val;
        used_gcds.insert(gcd(i, val));
    }

    cout << "YES\n";
    for (int i = 1; i <= n; i++) {
        cout << ans[i] << " ";
    }
    cout << "\n";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) solve();

    return 0;
}
