#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    ll n; cin >> n;
    vector<ll> arr(n);

    // Read the input array
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    while (true) {
        // Recalculate odd and even
        ll odd = 0, even = 0;
        for (auto x : arr) {
            if (x % 2 == 0) even++;
            else odd++;
        }

        // Debugging print: Show odd and even counts
        cout << "value of odd -> " << odd << endl;
        cout << "value of even -> " << even << endl;

        // Exit condition: if all numbers are either odd or even, break the loop
        if (odd == 0 || even == 0) break;

        sort(arr.begin(), arr.end());

        // Print the array after sorting for debugging purposes
        cout << "Sorted array: ";
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;

        // Handle even max value
        if (arr[n - 1] % 2 == 0) {
            bool modified = false;
            for (int i = 0; i < n - 1; i++) {
                if (arr[i] % 2 != 0 && arr[i] > 0) {
                    arr[i]--;      // Decrement odd number to make it even
                    arr[n - 1]++;  // Increment the even number (max value)
                    modified = true;
                    break;
                }
            }
            if (!modified) {
                cout << "No more modifications possible for even block" << endl;
                break;  // Break if no more modifications can be made
            }
        } 
        // Handle odd max value
        else {
            bool modified = false;
            for (int i = 0; i < n - 1; i++) {
                if (arr[i] % 2 == 0 && arr[i] > 0) {
                    arr[i]++;      // Increment even number to make it odd
                    arr[n - 1]++;  // Increment the odd number (max value)
                    modified = true;
                    break;
                }
            }
            if (!modified) {
                cout << "No more modifications possible for odd block" << endl;
                break;  // Break if no more modifications can be made
            }
        }
    }

    // Output the final max value after all modifications
    cout << arr[n - 1] << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
