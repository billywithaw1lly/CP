#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

// bool isPrime(ll num) {
//     if (num < 2)
//         return false;
//     for (ll i = 2; i*i <= num; i++) {
//         if (num % i == 0)
//             return false;
//     }
//     return true;
// }

int main() {
    ll n;
    cin >> n;

    // ll count = 0;
    // ll number = 2;

    // while (count < n) {
    //     if (isPrime(number)) {
    //         cout << number << " ";
    //         count++;
    //     }
    //     number++;
    // }

    for(int i = 0; i < n; i++){
        cout<<(3 * n) + i<<" ";
    }

    cout << endl;
    return 0;
}