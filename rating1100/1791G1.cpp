#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    ll n, c;
    cin>>n>>c;

    vector <pair <ll, ll>> arr(n);

    for(int i = 0; i < n; i++){
        cin>>arr[i].second;
        arr[i].first = arr[i].second + i + 1;
    }

    sort(arr.begin(), arr.end());

    // for(int i = 0; i < n; i++)
    //     cout<<arr[i].second<<" ";
    // cout<<endl;
    // for(int i = 0; i < n; i++)
    //     cout<<arr[i].first<<" ";

    ll count = 0;
    for(int i = 0; i < n; i++){
        if (c > 0){
            if (c - arr[i].first >= 0)
            count++;
            else break;
            c = c - arr[i].first;
        }
        else break;
    }
    cout<<count<<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--) solve();

    return 0;
}