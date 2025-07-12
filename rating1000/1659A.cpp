#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    ll n, r, b;
    cin >> n >> r >> b;

    ll mo = r % (b + 1);
    ll rep = r / (b + 1);

    while (r > 0 || b > 0)
    {

        // ll reps = rep;1
        int limit = min(rep, r);
        for (int i = 0; i < limit; i++)
        {
            cout << "R";
            r--;

        }
            if (mo > 0)
            {
                cout << "R";
                mo--;
                r--;
            }
            if (b > 0)
            {
                cout << "B";
                b--;
            }
    }
    cout << endl;
}

    int main()
    {
        ios::sync_with_stdio(0);
        int t;
        cin >> t;
        while (t--)
        {
            solve();
        }
        return 0;
    }