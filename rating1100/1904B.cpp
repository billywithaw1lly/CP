#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){

    ll n; cin>>n;

    vector<pair<ll, ll>> arr; //compare here
    for(int i = 0; i < n; i++){
        ll x; cin>>x;
        arr.push_back({x, i});
    }
    
    sort(arr.begin(), arr.end());

    vector<pair<ll, ll>> ans;
    for(int i = 0; i < n; i++){
        ll presum = arr[i].first;
        ll preans = 0;
        for(int j = 0; j < n; j++){
            if(presum >= arr[j].first && i != j){
                preans++;
                presum += arr[j].first;
            }
        }
        ans.push_back({preans, arr[i].second});
    }

    vector <pair<ll, ll>> ans2(n);
    for(int i = 0; i < n; i++){
        ans2[i].first = ans[i].second;
        ans2[i].second = ans[i].first;
    }
    sort(ans2.begin(), ans2.end());

    for(int i = 0; i < n; i ++){
        cout<<ans2[i].second<<" ";
    }
    cout<<endl;
    

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}