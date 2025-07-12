#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    ll n, s;
    cin>>n>>s;

    ll count = 0;
    int arr[n][4];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < 4; j++)
        cin>>arr[i][j];
    }

    for(int i = 0; i < n; i++){
        if(arr[i][2] == arr[i][3] && ( arr[i][0] == arr[i][1] )){
            count++;
        }
        else if( (arr[i][2] + arr[i][3]) == s && ( arr[i][0] != arr[i][1] ) ){
            count++;
        }
    }
    cout<<count<<endl;
 

    return;
}

int main(){
    ll t; cin>>t;

    while(t--)
    solve();

    return 0;
}