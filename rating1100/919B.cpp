#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    vector<ll> sum(10001);
    sum[0] = 0;

    ll k = 1;
    ll i = 1;

    while(k <= 10000){
        ll copy = i;
        ll tempSum = 0;
        while(copy > 0){
            ll dig = copy % 10;
            tempSum += dig;
            copy /= 10;
        }
        if(tempSum == 10){
            sum[k] = i;
            k++;
        }
        i++;
    }

    ll n;
    cin >> n;
    cout << sum[n] << endl;

    return 0;
}
