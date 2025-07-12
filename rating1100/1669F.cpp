#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    ll n; cin>>n;

    vector<ll> arr(n);

    for(int i = 0 ; i < n ; i++) cin>>arr[i];

    ll l = 0, r = n - 1;

    ll tempL = 1, tempR = 1;
    ll minC = 0;
    ll left = arr[l];
    ll right = arr[r];

    // cout<<"Initial wts"<<endl;
    // cout<<"Left "<<left<<endl;
    // cout<<"right "<<right<<endl;
    // cout<<endl;


    while(l < r){

        //cout<<"Value of Left posn "<< l + 1<<endl;
        //cout<<"Value of right posn "<< r + 1<<endl;

        //left += arr[l];
        //right += arr[r];

        // cout<<"Value of left wt "<< left<<endl;
        // cout<<"Value of right wt "<< right<<endl;

        if(left > right){
            r--;
            tempR++;
            right += arr[r];
            
        }
        else if( right > left){
            l++;
            tempL++;
            left += arr[l];
        }
        else{
            minC += tempR + tempL ;
            //cout<<"value of candy-> "<<minC<<endl;
            l++;
            r--;
            left += arr[l];
            right += arr[r];
            tempR = 1;
            tempL = 1;
        }
        // cout<<endl;
        // cout<<"After one loop the values are "<<endl;
        // cout<<"Value of Left posn "<< l + 1<<endl;
        // cout<<"Value of right posn "<< r + 1<<endl;
        // cout<<"Value of left wt "<< left<<endl;
        // cout<<"Value of right wt "<< right<<endl;


    }
    cout<<minC<<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}