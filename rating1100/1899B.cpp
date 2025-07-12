#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    ll n; cin>>n;
    vector<ll> arr(n);

    for(ll i = 0; i < n; i++) cin >> arr[i];

    vector<ll> pre(n);

    pre[0] = arr[0];

    for(int i = 1; i < n; i++)
    pre[i] = pre[i-1]+ arr[i];

    //presum
    // for(int i = 0; i < n; i++)
    // cout<<presum[i]<<" ";
    // cout<<endl;

    ll ans=0;
    for(ll k=1;k<=n;k++){//nlogn
        if(n%k)continue;
        ll start=k-1;
        ll res=0;
        ll maxi=pre[start];
        ll mini=pre[start];
        for(ll idx=start+k;idx<n;idx+=k){
            ll curr=pre[idx]-pre[idx-k];
            maxi=max(maxi,curr);
            mini=min(mini,curr);
        }
        ans=max(ans,maxi-mini);
    }
    cout<<ans<<endl;
    
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        solve();
    }
}