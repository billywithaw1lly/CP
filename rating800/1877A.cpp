#include <bits/stdc++.h>

using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int arr[n-1];

        int e = 0;

        for(int i = 0; i < n-1; i++){
            cin>>arr[i];
            e += arr[i];
        }
        
        int ee = 0 - e;
        cout<<ee<<"\n";
    }
    return 0;
}