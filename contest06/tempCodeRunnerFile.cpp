#include <bits/stdc++.h>
using namespace std;

int solve() {
    int n, k;
    cin >> n >> k;
    string s; 
    cin >> s;
    string r = s;
    reverse(r.begin(), r.end());

    if(k == 0 && s < r){
        cout<<"YES\n";
        return;
    }
    r = s;
    sort(r.begin(), r.end());
    if(k >= 1 && r[0] != r[n-1]){
        cout<<"YES\n";
        return;
    }
    cout<<"NO\n";
     
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