#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll t;
    cin >> t;

    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        ll xk, yk;
        cin >> xk >> yk;
        ll xq, yq;
        cin >> xq >> yq;
        int count = 0;
        if (a == b)
        {
            pair<ll, ll> pk[4];
            pk[0].first = xk + a;
            pk[0].second = yk + b;
            pk[1].first = xk - a;
            pk[1].second = yk - b;
            pk[2].first = xk + a;
            pk[2].second = yk - b;
            pk[3].first = xk - a;
            pk[3].second = yk + b;

            pair<ll, ll> pQ[4];
            pQ[0].first = xq + a;
            pQ[0].second = yq + b;
            pQ[1].first = xq - a;
            pQ[1].second = yq - b;
            pQ[2].first = xq + a;
            pQ[2].second = yq - b;
            pQ[3].first = xq - a;
            pQ[3].second = yq + b;

            for (int i = 0; i < 4; i++)
            {
                for (int j = 0; j < 4; j++)
                {
                    if (pQ[i].first == pk[j].first && pQ[i].second == pk[j].second)
                        count++;
                }
            }
            cout << count << "\n";
        }
        else
        {
            pair<ll, ll> pQ[8];
            pQ[0].first = xq + a;
            pQ[0].second = yq + b;
            pQ[1].first = xq - a;
            pQ[1].second = yq - b;
            pQ[2].first = xq + a;
            pQ[2].second = yq - b;
            pQ[3].first = xq - a;
            pQ[3].second = yq + b;
            pQ[4].first = xq + b;
            pQ[4].second = yq + a;
            pQ[5].first = xq - b;
            pQ[5].second = yq - a;
            pQ[6].first = xq - b;
            pQ[6].second = yq + a;
            pQ[7].first = xq + b;
            pQ[7].second = yq - a;

            pair<ll, ll> pk[8];
            pk[0].first = xk + a;
            pk[0].second = yk + b;
            pk[1].first = xk - a;
            pk[1].second = yk - b;
            pk[2].first = xk + a;
            pk[2].second = yk - b;
            pk[3].first = xk - a;
            pk[3].second = yk + b;
            pk[4].first = xk + b;
            pk[4].second = yk + a;
            pk[5].first = xk - b;
            pk[5].second = yk - a;
            pk[6].first = xk - b;
            pk[6].second = yk + a;
            pk[7].first = xk + b;
            pk[7].second = yk - a;

            for (int i = 0; i < 8; i++)
            {
                for (int j = 0; j < 8; j++)
                {
                    if (pQ[i].first == pk[j].first && pQ[i].second == pk[j].second)
                        count++;
                }
            }
            cout << count << "\n";
        }
    }
    return 0;
}