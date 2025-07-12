#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s, t;
    cin >> s >> t;

    int i = 0, j = 0;
    int len1 = s.size(), len2 = t.size();

    while (i < len1 && j < len2) {
        if (s[i] != t[j]) {
            cout << "NO\n";
            return;
        }
        int cnt1 = 1;
        while (i + 1 < len1 && s[i] == s[i + 1]) {
            i++;
            cnt1++;
        }
        int cnt2 = 0;
        while (j < len2 && t[j] == s[i]) {
            j++;
            cnt2++;
        }

        if (cnt2 < cnt1) {
            cout << "NO\n";
            return;
        }

        i++;
    }

    if (i == len1 && j == len2)
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n;
    cin >> n;
    while (n--)
        solve();

    return 0;
}
