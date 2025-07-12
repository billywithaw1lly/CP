#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ll n, k;
    cin>>n>>k;

    if ( k <= n){
        cout<<( k - 1)/2<<endl;
        return 0;
    }
    cout<<  max(ll(0) ,(((2 * n) - k + 1) / 2)) <<endl;
    return 0;
}