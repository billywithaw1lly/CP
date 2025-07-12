#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

bool is_palindrome(const vector<ll>& a) {
    int l = 0, r = a.size() - 1;
    while(l < r) {
        if(a[l] != a[r]) return false;
        l++;
        r--;
    }
    return true;
}

bool can_be_kalindrome(vector<ll> a, ll x) {
    vector<ll> filtered;
    for(ll val : a) {
        if(val != x) filtered.push_back(val);
    }
    return is_palindrome(filtered);
}

void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    for(ll& x : a) cin >> x;

    int l = 0, r = n - 1;
    while(l < r && a[l] == a[r]) {
        l++;
        r--;
    }

    if(l >= r) {
        cout << "YES\n";  // Already palindrome
        return;
    }

    // Try removing either a[l] or a[r]
    if(can_be_kalindrome(a, a[l]) || can_be_kalindrome(a, a[r])) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}
