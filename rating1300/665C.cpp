#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

char getDifferentChar(char a, char b)
{
    for (char c = 'a'; c <= 'z'; ++c)
    {
        if (c != a && c != b)
            return c;
    }
    return 'x';
}

int main()
{
    fastio;

    string s;
    cin >> s;
    int changes = 0;

    for (int i = 1; i < s.size(); ++i)
    {
        if (s[i] == s[i - 1])
        {
            char next = (i + 1 < s.size()) ? s[i + 1] : '?';
            s[i] = getDifferentChar(s[i - 1], next);
            changes++;
        }
    }

    cout << s << "\n";


    return 0;
}
