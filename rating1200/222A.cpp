#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ll n,k; cin>>n>>k;

    vector<ll> v(n);

    for(int i = 0; i < n; i++){
        cin>>v[i];
    }

    bool possible = true;

    for(int i = k; i < n; i++){
        if(v[k - 1] != v[i]){
            possible = false;
            break;
        }
    }

    ll count = 0;
    if(possible){
        for(int i = k - 2; i >= 0; i--){
            if(v[i] != v[k - 1]){
                count = i + 1;
                break;
            }
        }
        cout<<count<<endl;
    }
    else
    cout<<-1<<endl;


    return 0;
}