#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define fastread                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);

int main()
{
    fastread;
    int n, m;
    cin>>n>>m;

    if( n == m ){
        cout<<0<<" "<<0<<endl;
        return 0;
    }
    
    ll minn = 0, maxx = 0;
    
    ll maxV = n - m + 1;
    ll minV = n / m;

    maxx = (maxV * (maxV - 1)) / 2;

    // if(m == 1){
    //     cout<<maxx<<" "<<maxx<<endl;
    //     return 0;
    // }

    if(n % m == 0){
        minn = m * (( minV * (minV - 1)) / 2);
        cout<<minn<<" "<<maxx<<endl;
    }
    else{
        ll k1 = n % m;
        ll k2 = m - k1;

        minn = (k1 * (((minV + 1) * minV)/ 2)) + (k2 * ((minV * (minV - 1)) / 2));

        cout<<minn<<" "<<maxx<<endl;
    }


    return 0;
}
