#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    ll n; cin>>n;
    vector<ll> arr1(n);
    vector<ll> arr2(n);
    
    for(int i = 0; i < n; i++) cin>>arr1[i];
    for(int i = 0; i < n; i++) cin>>arr2[i];


    ll first1 = 0, last1 = n-1;
    // ll first2 = 0, last2 = n-1;
    while(true){
        if (arr1[first1] == arr2[first1])
        first1++;
        //first2++;
        if (arr1[last1] == arr2[last1])
        last1--;
        //last2--;
        if((arr1[first1] != arr2[first1]) && (arr1[last1] != arr2[last1]))
        break;
    }
    while(true){
        if(last1<n-1){
            if (arr1[last1+1] >= arr1[last1] && arr2[last1 +1] >= arr2[last1])
        last1++;
        else
        break;
        }
        else
        break;
    }
    while(true){
        if(first1 > 0){
            if (arr1[first1-1] <= arr1[first1] && arr2[first1 - 1] <= arr2[first1])
        first1--;
        else
        break;
        }
        else
        break;
    }
    cout<<first1+1<<" "<<last1+1<<endl;
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