#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string str;
        cin >> str;

        int i = 0, j = n - 1;
        while (i < j) {
            if ((str[i] == '0' && str[j] == '1') || (str[i] == '1' && str[j] == '0')) {
                i++;
                j--;
            } else {
                break;
            }
        }
        int remaining_length = j - i + 1;
        cout << remaining_length << "\n";
    }
    return 0;
}