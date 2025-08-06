#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fastio \
    ios::sync_with_stdio(0);\
    cin.tie(0);

int main(){
    fastio
    int n; cin>>n;
    int k = n / 2;
    ll ans = 0;
    bool even = false;

    if(n % 2 == 0) even = true;

    if(even){
        ans = (k + 1) * (k + 1);
        cout<<ans<<endl;
        return 0;
    }

    ans = 2 * (k + 1) * (k + 2);
    cout<<ans<<endl;
    return 0;
}
