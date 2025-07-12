#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define fastread                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);

void solve()
{
    int n;
    cin >> n;
    string s1, s2;
    cin >> s1 >> s2;

    int z = 0, o = 0;
    vector<bool> equal_prefix(n);

    for (int i = 0; i < n; i++)
    {
        if (s1[i] == '0')
            z++;
        else
            o++;
        equal_prefix[i] = (z == o);
    }

    bool flipped = false;

    for (int i = n - 1; i >= 0; i--)
    {
        char c = s1[i];
        if (flipped)
            c = (c == '0' ? '1' : '0');

        if (c != s2[i])
        {
            if (equal_prefix[i])
            {
                flipped = !flipped;
            }
            else
            {
                cout << "NO\n";
                return;
            }
        }
    }

    cout << "YES\n";
}

int main()
{
    fastread;
    ll t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}
