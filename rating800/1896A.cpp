#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;

    while(t--){
        int n; cin>>n;
        int arr[n]; for(int i = 0; i < n; i++) cin>>arr[i];

        if(arr[0] == 1)
        cout<<"Yes\n";
        else
        cout<<"No\n";
    }
    return 0;
}