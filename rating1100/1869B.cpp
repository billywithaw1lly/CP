#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    ll n, k, a, b;
    cin>>n>>k>>a>>b;

    vector<pair<ll, ll>> coo(n);
    for(int i = 0 ; i < n; i++){
        cin>>coo[i].first>>coo[i].second;
    }

    //testing input
    // for(int i = 0; i < n; i++){
    //     cout<<coo[i].first<<" "<<coo[i].second<<endl;
    // }
    
    //whats the basic idea?? start point to all major ccordinates if start outside major
    // same with end point and pick minimum values
    // check the direct cost maybe the for the least too

    vector<ll> startCost;
    vector<ll> endCost;

    //variable for min start cost and min end cost

    //1e9 was giving a logical error
    ll start = 1e16;
    ll end = 1e16;

    ll directCost = abs(coo[a-1].first - coo[b-1].first) + abs(coo[a-1].second - coo[b-1].second);

    //checking directcost error??
    // cout<<directCost<<endl;
    // cout<<start+end<<endl;

    for(int i = 0; i < k; i++){
        ll tempcost = abs(coo[i].first - coo[a-1].first) + abs(coo[i].second - coo[a-1].second);
        startCost.push_back(tempcost);
        start = min(start, tempcost);
    }
    for(int i = 0; i < k; i++){
        ll tempcost = abs(coo[i].first - coo[b-1].first) + abs(coo[i].second - coo[b-1].second);
        endCost.push_back(tempcost);
        end = min(end, tempcost);
    }
    
    //checking cost logic
    // cout<<"start cost"<<endl;
    // for(int i = 0; i < k; i++)
    // cout<<startCost[i]<<" ";
    // cout<<endl;

    // cout<<"end cost"<<endl;
    // for(int i = 0; i < k; i++)
    // cout<<endCost[i]<<" ";
    // cout<<endl;
    cout<<min((start+end), directCost)<<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}