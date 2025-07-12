#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

void solve() {
    string p, s;
    cin >> p >> s;

    ll lp = p.size(), ls = s.size();

    int i = 0, j = 0;
    bool isit = true;

    while (i < lp && j < ls) {
        if (s[j] != p[i]) {
            isit = false;
            break;
        }

        char current = s[j];


        int countS = 0;
        while (j < ls && s[j] == current) {
            countS++;
            j++;
        }


        int countP = 0;
        while (i < lp && p[i] == current) {
            countP++;
            i++;
        }

        if (current == 'L') {
            int mini = (countS % 2 == 0) ? (countS / 2) : (countS / 2 + 1);
            int maxi = countS;
            if (countP < mini || countP > maxi) {
                isit = false;
                break;
            }
        } else {
            int mini = (countS % 2 == 0) ? (countS / 2) : (countS / 2 + 1);
            int maxi = countS;
            if (countP < mini || countP > maxi) {
                isit = false;
                break;
            }
        }
    }

    if (i != lp || j != ls) isit = false;

    cout << (isit ? "YES\n" : "NO\n");
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