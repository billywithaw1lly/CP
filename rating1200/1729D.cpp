#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastread ios_base::sync_with_stdio(0); cin.tie(0);

void solve() {
    fastread;
    ll n;
    cin >> n;
    vector<ll>x(n), y(n);
    vector<pair<ll, ll>>dif(n);

    for(auto &i : x) cin >> i;
    for(auto &i : y) cin >> i;
    for(ll i = 0; i < n; i++){
        dif[i].first = y[i] - x[i];
        dif[i].second = i;
    }
    sort(dif.rbegin(), dif.rend());

    ll j = n - 1, cnt = 0;

    for(ll i = 0; i < n; i++){
        while(j > i && dif[i].first + dif[j].first < 0) j--;
        if(j <= i) break;
        cnt++; j--;
    }
    cout << cnt << endl;
}

int main() {
    fastread;
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}
