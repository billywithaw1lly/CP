// #include <bits/stdc++.h>

// using namespace std;

// void solve() {
//     int n, x;
//     cin >> n >> x;

//     vector<int> arr(n, x);

//     if (n == 1) {
//         cout << x << endl;
//         return;
//     }
//     // for (int i = 0; i < n; i++) {
//     //     if ((x | i) == x) {
//     //         arr[i] = i;
//     //         enter = true;
//     //     }
//     // }
//     int i = 0;
//     while(n > 0){
//         if(i <= x){
//             if (x | i == x){
//                 arr.push_back(i);
//                 n--;
//             }
//             i++;
//         }
//         else
//         break;
//     }

//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// int main() {
//     int t;
//     cin >> t;

//     while (t--) {
//         solve();
//     }
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, x;
    cin >> n >> x;

    vector<int> arr;

    if (n == 1) {
        cout << x << endl;
        return;
    }

    // Find numbers that satisfy (x | i) == x
    for (int i = 0; i <= x; i++) {
        if ((x | i) == x) {
            arr.push_back(i);
            if (arr.size() == n) break;
        }
    }

    // Fill with zeros if needed
    while (arr.size() < n) {
        arr.push_back(x);
    }

    // Print the result
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }
    return 0;
}