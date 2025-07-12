#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

void solve(){
    ll x, y, k;
    //x -> no of sticks you can buy with one stick
    //y -> the number of sticks required to buy one coal
    //k -> the number of torches your need


    cin>>x>>y>>k;

    ll total = (((k * y + k - 1) + (x - 1) - 1) / (x - 1)) + k;

    cout<<total<<endl;
}

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int t; cin>>t;

    while(t--){
        solve();
    }
}