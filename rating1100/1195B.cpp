#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ll n, k;
    cin>>n>>k;

    ll d = sqrt(9 + (8 * n) + (8 * k));

    ll ans = n - ((d - 3)/2);

    cout<<ans<<endl;
    return 0;
}