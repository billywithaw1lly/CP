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
        for (int i = 0; i < n; i++) cin >> arr[i];

        vector<int> ar;
        // ar.push_back(arr[0]); 

        for (int i = 0; i < n - 1; i++) {
            if (arr[i] <= arr[i + 1])
                ar.push_back(arr[i]);
            else
            {
                ar.push_back(arr[i]);
                ar.push_back(arr[i + 1]);
            }
        }

        ar.push_back(arr[n - 1]);

        cout<<ar.size()<<"\n";
        for(int i = 0; i < ar.size(); i++)
        cout<<ar[i]<<" ";
        cout << "\n";
    }
    return 0;
}