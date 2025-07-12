#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

void solve(){
    ll w, h;
    cin>>w>>h;

    ll xlow; cin>>xlow;
    ll arrxlow[xlow];

    for(ll i = 0; i < xlow; i++)
    cin>>arrxlow[i];

    ll xlowdiff = arrxlow[xlow-1] - arrxlow[0];

    ll area1 = xlowdiff * h;

    ll xhigh; cin>>xhigh;
    ll arrxhigh[xhigh];

    for(ll i = 0; i < xhigh; i++)
    cin>>arrxhigh[i];

    ll xhighdiff = arrxhigh[xhigh-1] - arrxhigh[0];

    ll area2 = xhighdiff * h;

    ll ylow; cin>>ylow;
    ll arrylow[ylow];

    for(ll i = 0; i < ylow; i++)
    cin>>arrylow[i];

    ll ylowdiff = arrylow[ylow-1] - arrylow[0];

    ll area3 = ylowdiff * w;

    ll yhigh; cin>>yhigh;
    ll arryhigh[yhigh];

    for(ll i = 0; i < yhigh; i++)
    cin>>arryhigh[i];

    ll yhighdiff = arryhigh[yhigh-1] - arryhigh[0];

    ll area4 = yhighdiff * w;

    cout << max({area1, area2, area3, area4}) << endl;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t; cin>>t;
    while(t--){
        solve();
    }
}