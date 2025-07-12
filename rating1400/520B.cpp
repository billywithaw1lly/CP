#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define fastread                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);

int main()
{
    fastread;
    int n, m;
    cin >> n >> m;

    int steps = 0;

    while (m > n)
    {
        if (m % 2 == 0)
            m /= 2;
        else
            m += 1;
        steps++;
    }
    steps += (n - m);
    cout << steps << endl;
    return 0;
}
