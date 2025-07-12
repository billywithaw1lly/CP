#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define fastread                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);

void solve()
{
    fastread;
    int n; cin >> n;
    string s; cin >> s;
    bool is_palindrome = 1;
    int cnt_0 = 0, cnt_1 = 0;
    
    for (int i = 0; i < n; i++)
    {
        cnt_0 += s[i] == '0';
    }
    for (int i = 0; i < n / 2; i++)
    {
        if (s[i] != s[n - 1 - i])
            is_palindrome = 0;
        if ((s[i] == '1' || s[n - 1 - i] == '1') && s[i] != s[n - 1 - i])
        {
            cnt_1++;
        }
    }
    if (is_palindrome)
    {
        if (cnt_0 == 1)
        {
            cout << "BOB\n";
            return;
        }
        if (cnt_0 % 2)
        {
            cout << "ALICE\n";
            return;
        }
        cout << "BOB\n";
        return;
    }
    if (cnt_0 == 2 && cnt_1 == 1)
    {
        cout << "DRAW\n";
        return;
    }
    cout << "ALICE\n";
    return;
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
