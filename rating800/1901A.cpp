#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t; cin>>t;

    while(t--){
        int n, x;
        cin>>n>>x;

        int arr[n];

        for(int i = 0 ; i < n ; i++)
        cin>>arr[i];

        ll difFirst = arr[0];
        ll difLast = x-arr[n-1];

        ll dif = 0;
        for(int i = 0 ; i < n-1 ; i++){
            ll dif2 = arr[i+1] - arr[i];
            if (dif2 > dif)
            dif = dif2;
        }
        difLast = max ((difLast*2), dif);
        difLast = max (difLast, difFirst);
        cout<<difLast<<"\n";
    }

    return 0;
}