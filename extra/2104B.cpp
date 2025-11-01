#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    ll n; cin>>n;
    vector <pair <ll, ll>>arr(n);

    for(int i = 0; i < n; i++){
        cin>>arr[i].first;
        arr[i].second = i;
    }

    vector <ll> presum (n + 1);

    // ll temp = INT_MIN;
    //     for(int i = 0; i < n; i++)
    //     if(arr[i] >= temp){
    //         temp = arr[i];
    //     }

    // presum[0] = temp;
    // int k = 1;


    // while(k <= n){
    //     temp = 0;
    //     for(int i = 0; i < n - k; i++)
    //     if(arr[i] >= temp){
    //         temp = arr[i];

    //     }


    //     ll tempsum = 0;
    //     for(int i = n - 1; i > n - k - 1; i--){
    //         tempsum += arr[i];
    //     }

    //     presum[k] = tempsum + temp; 
    //     k++;
    // }

    vector <ll> postsum (n + 1);
    postsum[0] = 0;
    for(int i = n - 1; i > 0; i--){
        postsum[n - i] = postsum[n - i - 1] + arr[i].first;
    }

    // for(int i = 0; i < n; i++)
    // cout<<postsum[i]<<endl;

    sort(arr.rbegin(), arr.rend());

    // for(int i = 0; i < n; i++)
    // cout<<arr[i].first<<" ";
    // cout<<endl;
    ll i = 0;
    ll k = n - 1;
    ll j = 0;
    while(true){
        // cout<<arr[j].second<<" value of arr j second";
        // cout<<endl;
        // cout<<k<<" value of k";
        // cout<<endl;
        if(arr[j].second <= k)
        {
            // cout<<arr[j].first<<" value of i . first";
            // cout<<endl;
            postsum[i] += arr[j].first;
            i++;
            k--;
            if(i >= n)
            break;
        }
        else{
            j++;
            if(j >= n)
            break;
        }
    }

    for(int i = 0; i < n; i++)
    cout<<postsum[i]<<" ";
    cout<<endl;

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