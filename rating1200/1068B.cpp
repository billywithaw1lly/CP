#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll n ; cin>>n;

    set<ll> s;

    for(int i = 1; i <= 1e18; i++){
        ll ans = (lcm(i, n) / i);
        s.insert(ans);
    }
    cout<<s.size()<<endl;
    return 0;
}