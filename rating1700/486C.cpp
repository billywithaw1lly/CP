#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);


int cd(char from, char to)
{
    int diff = abs(from - to);
    diff = min (diff, 26-diff);
    return diff;
}

int move_cyclic(int a, int b, int len)
{
    int diff = abs(a - b);
    return min(diff, len - diff);
}

int main()
{
    fastio;

    int n, p;
    cin >> n >> p;
    string s;
    cin >> s;

    p--;
    if (p >= n / 2)
        p = n - p - 1;

    int len = n / 2;
    int l = -1, r = -1;
    vector<int> diff(len);

    for (int i = 0; i < len; i++)
    {
        diff[i] = cd(s[i], s[n - i - 1]);
        if (diff[i] > 0)
        {
            if (l == -1)
                l = i;
            r = i;
        }
    }

    if (l == -1)
    {
        cout << 0 << "\n";
        return 0;
    }

    int change_cost = accumulate(diff.begin() + l, diff.begin() + r + 1, 0);

    int move_cost = min(
        move_cyclic(p, l, len) + (r - l),
        move_cyclic(p, r, len) + (r - l)
    );

    cout << change_cost + move_cost << "\n";
    return 0;
}
