#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n,x;
    cin>>n>>x;

    vector <int> arr(n);

    for(int i = 0; i < n; i++)
    cin>>arr[i];

    sort(arr.rbegin(), arr.rend());

    // for(int i = 0; i < n; i++)
    // cout<<arr[i]<<" ";

    int i = 0, j = 0; int count = 1; int fcount = 0;

    while(j < n){
        int k = i;
        //
        // cout<<"value of k->"<<arr[k]<<endl;
        int dif = arr[k] * count;
        // cout<<"val of diff -> "<<dif<<endl;
        if(dif >= x){
            // cout<<"value of final count before "<<fcount<<endl;
            fcount++;
            // cout<<"value of final count after "<<fcount<<endl;
            count = 1;
            j++;
            // cout<<"value of j->"<<j<<endl;
            i ++;
            // cout<<"value of i->"<<i<<endl;
        }
        else{
            count++;
            // cout<<"value of count in else bracket->"<<count<<endl;
            j++;
            i++;
            // cout<<"value of j in else bracket->"<<j<<endl;
        }
    }
    cout<<fcount<<endl;

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