#include <bits/stdc++.h>

using namespace std;

void solve(){

    int t;
    cin>>t;

    while(t--){
        int n; cin>>n;

        vector<int> vec(n);

        for(int i = 0; i < n; i++)
        cin>>vec[i];

        sort(vec.rbegin(), vec.rend());

        if(vec[0] == vec[n-1])
        cout<<"NO\n";
        else{
            if(vec[0] == vec[1])
            swap (vec[1], vec[n-1]);
            cout<<"YES\n";
            for(int i = 0; i < n ; i++)
            cout<<vec[i]<<" ";
            cout<<"\n";
        }
    }
}
int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}