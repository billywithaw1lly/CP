#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1073741824;
const int MAX = 1e6 + 5;

int divisors[MAX];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c;
    cin >> a >> b >> c;

    for (int i = 1; i < MAX; ++i) {
        for (int j = i; j < MAX; j += i) {
            divisors[j]++;
        }
    }
    
    ll sum = 0;
    for (int i = 1; i <= a; ++i) {
        for (int j = 1; j <= b; ++j) {
            for (int k = 1; k <= c; ++k) {
                int prod = i * j * k;
                sum = (sum + divisors[prod]) % MOD;
            }
        }
    }

    cout << sum << "\n";
    return 0;
}
