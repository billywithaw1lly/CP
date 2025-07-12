#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; 
    cin >> n;
    vector<int> arr(n);

    int count0 = 0, count1 = 0, count2 = 0, count3 = 0, count5 = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    if (n < 8) {
        cout << "0\n";
        return;
    }



    int finalCount = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) count0++;
        if (arr[i] == 1) count1++;
        if (arr[i] == 2) count2++;
        if (arr[i] == 3) count3++;
        if (arr[i] == 5) count5++;

        if (count0 >= 3 && count1 >= 1 && count2 >= 2 && count3 >= 1 && count5 >= 1) {
            cout << i+1 << endl;
            return;
        }
    }
    cout << "0\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t; 
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}