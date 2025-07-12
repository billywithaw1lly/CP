#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

void solve() {
    ll n;
    cin >> n;
    string s;
    cin >> s;

    unordered_set<char> st;
    vector<ll> prefixcount(n+1, 0);
    vector<ll> suffixcount(n+1, 0);

    int maxx = 0;

    for (int i = 1; i <= n ; i++){
        st.insert(s[i - 1]);
        prefixcount[i] = st.size();
    }
    st.clear();

    for(int i = n; i >= 1; i--){
        st.insert(s[i -1]);
        suffixcount[i] = st.size();
    }
    ll ans = 0;
    for(int i = 0; i < n; i++)
    ans = max(ans, prefixcount[i] + suffixcount[i+1]);

    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}