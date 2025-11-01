#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    int n; cin >> n;
    vector<int> arr(n);
    int count = 0;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if(arr[i] == 1) count++;
    }

    if (count == 0 || count == n){
        cout<<"YES"<<endl;
        return;
    }
    for(int i = 0; i < n - 1; i++){
        if(arr[i] == 0 && arr[i+1] == 0){
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) solve();

    return 0;
}
