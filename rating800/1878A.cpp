#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t; cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        int arr[n];
        for(int i = 0; i < n; i++)
        cin>>arr[i];

        bool found = false;
        for(int i = 0; i < n; i++){
            if(arr[i]==k){
                cout<<"Yes\n";
                found = true;
                break;
            }
        }
        if(!found)
        cout<<"No\n";
    }
    return 0;
}