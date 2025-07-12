// for n days,  atleast k, q limit 

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

ll summ(ll n, ll k){

    ll x = n - k + 1;
    if (x <= 0) return 0;
    return (x * (x + 1)) / 2;
}
void solve(){

    ll n,k,q;
    cin>>n>>k>>q;
    int count = 0;
    
    vector <int> vec;
    vector<int> arr(n);

    for(int i = 0; i < n; i++){
        cin>>arr[i];

        if(arr[i] <= q){
            count++;
        }
        else{
            if(count >= k){
                vec.push_back(count);

            }
            count = 0;
        }
    }//completes all the input segemt got total group of days, total days and all the inputs

    if(count != 0){
        if(count >= k){
            vec.push_back(count);
        }
        count = 0;
    }

    int len = vec.size();

    // testing
    // cout<<len<<endl;
    // cout<<group<<endl;
    // for(int i = 0; i < len; i++)
    // cout<<vec[i]<<endl;

    ll sum = 0;
    for (int len : vec) {
        sum += summ(len, k);
    }
    cout << sum << endl;

}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t; cin>>t;

    while(t--){
        solve();
    }
    return 0;
}