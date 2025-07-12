#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    map<int, int> freq;
    int x, maxFreq = 0;

    for (int i = 0; i < n; ++i) {
        cin >> x;
        freq[x]++;
        maxFreq = max(maxFreq, freq[x]);
    }

    if (maxFreq > (n + 1) / 2)
        cout << "NO\n";
    else
        cout << "YES\n";

    return 0;
}
