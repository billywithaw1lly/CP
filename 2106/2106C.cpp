#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n), b(n);

    ll maxx = -1, mini = LLONG_MAX;
    for(int i = 0 ; i < n; i++) {
        cin >> a[i];
        maxx = max(maxx, a[i]);
        mini = min(mini, a[i]);
    }

    for(int i = 0 ; i < n; i++)
        cin >> b[i];

    ll sum = -1;
    bool flag = true;

    for(int i = 0 ; i < n; i++) {
        if (b[i] != -1) {
            if (sum != -1 && a[i] + b[i] != sum) {
                flag = false;
                break;
            }
            sum = a[i] + b[i];
        }
    }

    if (!flag) {
        cout << "0\n";
        return;
    }

    if (sum == -1) {
        cout << max(0LL, (mini + k) - maxx + 1) << "\n";
        return;
    }

    if (sum < maxx || sum > mini + k) {
        cout << "0\n";
    } else {
        cout << "1\n";
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) solve();

    return 0;
}
