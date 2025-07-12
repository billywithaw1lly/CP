#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin>>t;

    while(t--){
        int n;
        cin>>n;

        int count = 0;
        int countZ = 0;
        int arr[n];
        ll final = 0;

        for(int i = 0; i < n; i++){
            cin>>arr[i];
            if (arr[i] == 1)
            count++;
            if(arr[i] == 0)
            countZ++;
        }
        final = pow(2, countZ) * count;

        cout<<final<<"\n";

    }

    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;

// void solve() {
//     int n;
//     cin >> n;
    
//     int count_1 = 0, count_0 = 0;

//     for (int i = 0; i < n; i++) {
//         int x;
//         cin >> x;
//         if (x == 1) count_1++;
//         else if (x == 0) count_0++;
//     }

//     cout << (count_1 * (1LL << count_0)) << "\n";  // 2^count_0 can be written as (1LL << count_0)
// }

// int main() {
//     ios::sync_with_stdio(0);
//     cin.tie(0);
    
//     int t;
//     cin >> t;
//     while (t--) {
//         solve();
//     }
    
//     return 0;
// }