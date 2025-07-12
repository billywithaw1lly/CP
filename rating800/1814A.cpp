#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t; cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        if(n == 1 && k == 1)
        cout<<"YES\n";
        else if(n%2 == 0)
        cout<<"YES\n";
        else
        {
            if(k % 2 != 0)
            {
                ll a = n - k;
                if ( a%2 == 0)
                cout<<"YES\n";
            }
            else 
            cout<<"NO\n";
        }
    }
    return 0;
}