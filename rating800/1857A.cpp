#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin>>t;
    while (t--){
        int n; cin>>n;
        int arr[n];
        int element;
        for(int i = 0; i < n; i++){
            cin>>arr[i];
        }

        int odd_count = 0;

        for(int i = 0; i < n; i++)
        {
            if (arr[i] % 2 == 1)
            odd_count++;
        }
        if(odd_count % 2 == 1)
        cout<<"NO\n";
        else
        cout<<"YES\n";
    }
    return 0;
}