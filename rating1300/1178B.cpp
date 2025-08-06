#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

int main()
{
    fastio;
    string str;
    cin >> str;
    ll ans = 0;

    string s;
    int L = str.length();
    for (int i = 1; i < L; ++i)
    {
        if (str[i] == 'v' && str[i - 1] == 'v')
            s += 'w';
        else if (str[i] == 'o')
            s += 'o';
    }

    int n = s.size();
    vector<ll> prefix(n + 1, 0);
    for (int i = 0; i < n; ++i)
    {
        prefix[i + 1] = prefix[i] + (s[i] == 'w');
    }

    for (int i = 0; i < n; ++i)
    {
        if (s[i] == 'o')
        {
            ll left_w = prefix[i];
            ll right_w = prefix[n] - prefix[i + 1];
            ans += left_w * right_w;
        }
    }

    cout << ans << "\n";
    return 0;
}
