#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

void solve() {
    ll given, target;
    cin >> given >> target;

    if (given == target) {
        cout << "0\n";
        return;
    }

    ll count = 0;

    // If target is greater, multiply
    while (given < target) {
        if (target % (given * 8) == 0) {
            given *= 8;
        } else if (target % (given * 4) == 0) {
            given *= 4;
        } else if (target % (given * 2) == 0) {
            given *= 2;
        } else {
            cout << "-1\n";  // If no valid multiplication exists
            return;
        }
        count++;
    }

    // If given is greater, divide
    while (given > target) {
        if (given % 8 == 0 && given / 8 >= target) {
            given /= 8;
        } else if (given % 4 == 0 && given / 4 >= target) {
            given /= 4;
        } else if (given % 2 == 0 && given / 2 >= target) {
            given /= 2;
        } else {
            cout << "-1\n";  // If no valid division exists
            return;
        }
        count++;
    }

    cout << count << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}