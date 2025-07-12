#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n; cin>>n;
    vector<ll> arr(n);

    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    ll count25 = 0;
    ll count50 = 0;
    ll count100 = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == 25){
            count25++;
        }
        else if(arr[i] == 50){
            if(count25 > 0){
                count25--;
                count50++;
            }
            else{
                cout<<"NO\n";
                return 0;
            }
        }
        else{
            if(count25 > 0 && count50 > 0){
                count25--;
                count50--;
                count100++;
            }
            else if(count25 > 2){
                count25 -= 3;
                count100++;
            }
            else{
                cout<<"NO\n";
                return 0;
            }
        }
    }
    cout<<"YES\n";
    return 0;
}