#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n; 
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        set<int> s(arr.begin(), arr.end());

        if (s.size() > 2) {
            cout << "No\n";
        } else if (s.size() == 1) {
            cout << "Yes\n";
        } else {
            auto it = s.begin();
            int val1 = *it;  
            int val2 = *(++it);  

            int count1 = 0, count2 = 0;
            for (int i = 0; i < n; i++) {
                if (arr[i] == val1) count1++;
                if (arr[i] == val2) count2++;
            }

            if (abs(count1 - count2) > 1)
                cout << "No\n";
            else
                cout << "Yes\n";
        }
    }
    return 0;
}