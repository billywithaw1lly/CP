#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr)

const int MOD = 1000000007;

int main()
{
    fastio;
    ll a, b;
    cin >> a >> b;
    ll count = 0;

    while (a != 0 || b != 0)
    {
        if (a > b)
        {
            count += a / b;
            a = a % b;
            if (a == 0)
                break;
        }
        else
        {
            count += b / a;
            b = b % a;
            if (b == 0)
                break;
        }
    }
    cout << count << "\n";

    return 0;
}