#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define fastread                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);

int main()
{
    fastread;
    int m, s;
    cin >> m >> s;

    if ((s == 0 && m > 1) || s > 9 * m)
    {
        cout << -1 << " " << -1 << endl;
        return 0;
    }
    if (s == 0 && m == 1)
    {
        cout << 0 << " " << 0 << endl;
        return 0;
    }

    string lar = "";
    int sum = s;
    for (int i = 0; i < m; i++)
    {
        if (sum >= 9)
        {
            lar += '9';
            sum -= 9;
        }
        else
        {
            lar += (sum + '0');
            sum = 0;
        }
    }

    string sma(m, '0');
    sum = s;

    for (int i = m - 1; i >= 0; i--)
    {
        int add = max(0, min(9, sum));
        sma[i] = '0' + add;
        sum -= add;
    }

    // Ensure first digit is not '0'
    if (sma[0] == '0')
    {
        for (int i = 1; i < m; i++)

            if (sma[i] > '0')
            {
                sma[i]--;
                sma[0] = '1';
                break;
            }
    }
    cout << sma << " " << lar << endl;
    return 0;
}
