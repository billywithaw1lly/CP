#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    ll n; cin>>n;

    vector<ll> arr(n + 1);
    arr[0] = 0;
    
    for(int i = 1; i <= n; i++)
    cin>>arr[i];

    ll minn = 1;
    ll maxx = n;
    ll i = 1;
    ll j = n;

    while (i <= j){
        if(arr[i] == minn || arr[i] == maxx){
            if(arr[i] == minn){
                i++;
                minn++;
            }
            else{
                i++;
                maxx--;
            }
        }
        else if(arr[j] == minn || arr[j] == maxx){
            if(arr[j] == minn){
                j--;
                minn++;
            }
            else{
                j--;
                maxx--;
            }
        }
        else{
            cout<<i<<" "<<j<<endl;
            return;
        }
    }
    cout<<-1<<endl;

 
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
