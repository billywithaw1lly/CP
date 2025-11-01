#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);


int main()
{
    fastio;
    string s;
    cin >> s;

    string res = "";
    for (char c : s)
    {
        int n = res.size();
        if (n >= 2 && res[n - 1] == c && res[n - 2] == c)
        {
            continue;
        }
        if (n >= 3 && res[n - 3] == res[n - 2] && res[n - 1] == c)
        {
            continue;
        }

        res += c;
    }

    cout << res << "\n";
    return 0;
}
