#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ll n, k;
    cin>>n>>k;

    vector<ll> v(k);

    for( auto &a : v)
    cin >> a;

    ll indexMax = 0;
    ll remMin = n % v[0];

    for(int i = 1 ; i < k; i++){
        ll temp = n % v[i];
        if(temp <= remMin){
            remMin = temp;
            indexMax = i;
        }
    }
    cout<<indexMax + 1<<" "<<(n / v[indexMax])<<endl;
    return 0;

}