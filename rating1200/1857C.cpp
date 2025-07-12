#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    ll n; cin>>n;
    ll x; 
    x = (n * (n - 1)) / 2;

    vector <ll> arr(x);

    for(int i = 0; i < x; i++)
    cin>>arr[i];

    sort(arr.begin(), arr.end());

    vector<ll> t(n);
    ll j = 0;
    ll k = n - 1;
    for(int i = 0; i < n - 1; i++){
        t[i] = arr[j];
        j += k;
        k--;
    }
    t[n-1] = t[n-2];
    for(int i = 0; i < n; i++)
    cout<<t[i]<<" ";
    cout<<endl;
    return;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    ll t; cin>>t;

    while(t--)
    solve();

    return 0;
}