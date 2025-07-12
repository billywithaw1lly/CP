#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll n ; cin>>n;

    vector<ll> v(n);

    bool odd = false;
    for(int i = 0; i < n; i++){
        cin>>v[i];
        if(v[i] % 2 != 0)
        odd = true;
    }
    if(odd)
    cout<<"First"<<endl;
    else
    cout<<"Second"<<endl;
    return 0;
}