#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

bool isPrime(ll num) {
    if (num < 2) return false;
    if (num == 2) return true;
    if (num % 2 == 0) return false;

    for (ll i = 3; i * i <= num; i += 2) {
        if (num % i == 0)
            return false;
    }
    return true;
}

void solve(){
    ll x, k;
    cin >> x >> k;

    string X = to_string(x);
    string str = "";
    
    for(int i = 0; i < k; i++){
        str += X;
    }

    ll num;
    try {
        num = stoll(str);
    } catch (...) {
        cout << "NO\n";
        return;
    }

    if (isPrime(num))
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}