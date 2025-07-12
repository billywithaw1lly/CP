#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        ll a, b, c, d;
        cin >> a >> b >> c >> d;

        if (b <= d && c <= a + d - b)
        {
            cout << (d - b) + (a + d - b - c) << "\n";
        }
        else
        {
            cout << "-1\n";
        }
    }
    return 0;
}