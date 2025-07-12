#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll n, count=0;
    cin >> n;
    for (ll a = 1; a<=n; a++){
        for (ll b = a; b<=n; b++){
            ll cq = a*a+b*b;
            ll c = sqrt(cq);
            if (c*c==cq and c<=n) count++;
        }
    }
    cout << count;
    return 0;
}
