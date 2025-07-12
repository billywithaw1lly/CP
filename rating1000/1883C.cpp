#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);

    int evenCount = 0;
    bool div = false;
    int mini = INT_MAX;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];

        if (arr[i] % k == 0) 
            div = true;
        
        if (arr[i] % 2 == 0) 
            evenCount++;
        
        mini = min(mini, (k - (arr[i] % k)));
    }

    if(div){
        cout<<"0\n";
    }
    else{
        if(k == 2)
        cout<<"1\n";
        else if (k == 3)
        cout<<mini<<endl;
        else if ( k == 5)
        cout<<mini<<endl;
        else
        {
            if (evenCount >= 2)
            cout<<"0\n";
            else if (evenCount == 1)
            cout<<"1\n";
            else 
            cout<<min (2, mini)<<endl;
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
        cout<<endl;
    }
    
    return 0;
}