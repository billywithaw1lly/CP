//clang++ -std=c++2b 1789A.cpp -o 1789A  
//./1789A
#include <bits/stdc++.h>
#include <numeric>
using namespace std;

int gcd(int a, int b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

void solve() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        
        for (int i = 0; i < n; i++) 
            cin >> arr[i];


        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (gcd(arr[i], arr[j]) <= 2) {
                    cout << "YES\n";
                    goto next_case; 
                }
            }
        }

        cout << "NO\n";

    next_case:;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();
    return 0;
}