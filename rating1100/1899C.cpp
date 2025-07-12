#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; 
    cin >> n;
    vector<long long> arr(n);

    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    long long maxSum = LLONG_MIN;
    long long maxNegative = LLONG_MIN;

    int i = 0;
    bool foundPositive = false;


    for (; i < n; ++i) {
        if (arr[i] >= 0) {
            foundPositive = true;
            break;
        }
        maxNegative = max(maxNegative, arr[i]);
    }


    if (!foundPositive) {
        cout << maxNegative << endl;
        return;
    }

   
    for (int start = i; start < n; ++start) {
        long long currSum = arr[start];
        int lastParity = abs(arr[start]) % 2;
        maxSum = max(maxSum, currSum);


        for (int end = start + 1; end < n; ++end) {
            int parity = abs(arr[end]) % 2;
            if (parity == lastParity) break; 

            currSum += arr[end];
            maxSum = max(maxSum, currSum);
            lastParity = parity;
        }
    }

    cout << maxSum << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
