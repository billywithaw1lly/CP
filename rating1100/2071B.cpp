#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool check(ll n){
    ll sum = (n * ( n + 1 )) / 2;
    ll fact = sqrt(sum);

    if(fact * fact == sum){
        return true;
    }
    else 
    return false;
}

void solve(){
    ll n; cin>>n;
    // ll sum = (n * ( n + 1 )) / 2;
    // ll fact = sqrt(sum);

    if(check(n)){
        cout<<-1<<endl;
        return;
    }
    else
    {
        if ( n < 3){
            cout<<"2 1"<<endl;
        }
        else{
            for(int i = 1; i <= n;){
                if(!check(i)){
                    cout<<i<<" ";
                    i++;
                }
                else{
                    cout<<i+1<<" ";
                    cout<<i<<" ";
                    i+=2;
                }
            }
            cout<<endl;
        }
    }
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
