#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    ll n, c;
    cin>>n>>c;
    vector<ll> arr(n);

    ll sub = 0;
    ll b = 0;

    for(int i = 0; i < n; i++){
        cin>>arr[i];
        sub = sub + (arr[i] * arr[i]);
        b = b + (2 * arr[i]);
    }

    //cout<<sub<<endl;
    //cout<<b<<endl;
    
    c = c - sub;

    //cout<<c<<endl;

    //findind d

    ll d1 = b / 4;
    ll d2 = b / n;
    ll d3 = c / n;
    ll d4 = b / (2 * n);
    ll D = sqrt( (d1 * d2) + d3 );
    // ll D = sqrt((b * b) - (4 * n * c * -1));
    // cout<<D<<endl;

    ll res1 = -d4 + D;
    //cout<<res1<<endl;
    ll res2 = -d4 - D;
    //cout<<res2<<endl;

    ll res = max (res1, res2);
    cout<<res/2<<endl;
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