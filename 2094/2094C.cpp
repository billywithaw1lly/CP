#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

void solve(){
    ll n; cin >> n;
    vector<vector<ll>> arr(n, vector<ll>(n));


    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> arr[i][j];


    vector<ll> arrans(2 * n);
    arrans[0] = 0; 


    for(int i = 0; i < n; i++){
        arrans[i + 1] = arr[0][i];
    }


    for(int i = 1; i < n; i++){
        arrans[n + i] = arr[i][n - 1];
    }


    vector<ll> arrcopy = arrans;
    sort(arrcopy.begin(), arrcopy.end());

    ll missing = -1;
    for(int i = 0; i <= 2 * n; i++){
        if(i >= arrcopy.size() || arrcopy[i] != i){
            missing = i;
            break;
        }
    }

    arrans[0] = missing;

    for(int i = 0; i < 2 * n; i++)
        cout << arrans[i] << " ";
    cout << "\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while(t--){
        solve();
    }
}