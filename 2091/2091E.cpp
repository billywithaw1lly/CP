#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

void sieve(vector<ll> &isPrime, vector<ll> &primes, ll limit) {

    isPrime.assign(limit + 1, 1);
    isPrime[0] = isPrime[1] = 0;

    for (ll i = 2; i * i <= limit; i++) {
        if (isPrime[i]) {
            for (ll j = i * i; j <= limit; j += i) {
                isPrime[j] = 0;
            }
        }
    }

    for (ll i = 2; i <= limit; i++) {
        if (isPrime[i]) {
            primes.push_back(i);
        }
    }
}

void solve() {
    ll limit = 1e7;
    vector<ll> isPrime, primes;
    sieve(isPrime, primes, limit);

    ll n; cin>>n;

    for( ll i = 1; i < n ; i++){
        for(ll j = i + 1; j <= n; j++){

            ll mgcd = __gcd(i, j);
            ll mlcm = lcm(i, j);

            if 
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}