#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n,m;
    cin>>n>>m;

    int arr[n][m];

    int negs = 0;
    int minn = INT_MAX;
    int sum = 0;

    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++){
            cin>>arr[i][j];
            if(arr[i][j] < 0)
            negs++;
            minn = min(abs(arr[i][j]), minn);
            sum += abs(arr[i][j]);
        }

    if(negs % 2 == 0){
        cout<<sum<<endl;
    }
    else{
        cout<<sum-abs(2*minn)<<endl;
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}