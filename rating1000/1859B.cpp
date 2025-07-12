#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

void solve(){
    ll n; cin>>n;

    vector < vector <ll> > arr(n);

    for( ll i = 0; i < n; i++){
        ll m; cin>>m;
        arr[i].resize(m);

        for( ll j = 0; j < m; j++)
        cin>>arr[i][j];
    }

    for( ll i = 0; i < n; i++)
    sort(arr[i].begin(), arr[i].end());


    ll zeroMin = arr[0][0];
    ll zeroMin2 = arr[0][1];

    // checking code
    // cout<<"array 1 min ->"<<zeroMin<<endl;
    // cout<<"array 2 min ->"<<zeroMin2<<endl;

    ll sum = 0;

    // cout<<"initial sum ->"<<sum<<endl;

    for(ll i = 0; i < n; i++){
            zeroMin = min (arr[i][0], zeroMin);
            zeroMin2 = min (arr[i][1], zeroMin2);
            sum = sum + arr[i][1];
    }

    //after loop

    // cout<<"array 1 min -> "<<zeroMin<<endl;
    // cout<<"array 2 min -> "<<zeroMin2<<endl;
    // cout<<"sum before changing value -> "<<zeroMin2<<endl;

    sum = sum + zeroMin - zeroMin2;
    
    // cout<<"sum after changing value -> ";
    cout<<sum<<endl;

}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t; cin>>t;

    while(t--){
        solve();
    }
    return 0;
}