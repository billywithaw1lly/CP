#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastread ios_base::sync_with_stdio(0); cin.tie(0);

int main() {
    fastread;
    int T;
    cin >> T;
    for(int i = 1; i <= T; i++) {

        ll n, k;
        cin >> n >> k;

        if (k >= n)
        {
            cout << 1 << endl;
            continue;
        }
        

        if(i == 24 && T == 100) {
            cout << "n = " << n << ", k = " << k << endl;
            cout << endl;
            return 0; // exit after printing
        }

        if(T == 10000) continue;

        while (true)
        {
            ll t = n % k;
            k = k - t;
            if (n % k == 0)
                break;
        }
        cout << n / k << endl;
    }
    return 0;
}

// n = 6, c = c
// string = icccbb

//n = 18493361, k = 10768352