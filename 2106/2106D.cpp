#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    ll n, m;
    cin >> n >> m;

    vector <ll> a(n);
    vector <ll> b(m);

    for(int i = 0; i < n; i++) cin>>a[i];
    for(int i = 0 ; i < m; i++) cin>>b[i];

    int j = 0;
        for(int i = 0; i < n && j < m; i++){
            if(a[i] >= b[j]) j++;
        }
    
        if(j == m){
            cout << 0 << "\n";
            return;
        }

        vector<int> pref(m, n);
        j = 0;
        for(int i = 0; i < n && j < m; i++){
            if(a[i] >= b[j]){
                pref[j] = i;
                j++;
            }
        }

        vector<int> suff(m+1, -1);
        suff[m] = n;
        j = m-1;
        for(int i = n-1; i >= 0 && j >= 0; i--){
            if(a[i] >= b[j]){
                suff[j] = i;
                j--;
            }
        }

        ll ans = LLONG_MAX;
        for(int t = 0; t < m; t++){
            int L = (t==0 ? -1 : pref[t-1]);
            int R = (t==m-1 ? n : suff[t+1]);
            if(L < R){
                ans = min(ans, b[t]);
            }
        }

        if(ans == LLONG_MAX) ans = -1;
        cout << ans << "\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) solve();
    return 0;
}
