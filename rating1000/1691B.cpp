#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
void solve()
{
    ll n;
    cin >> n;
    vector<int> value(n);
    set<ll> uElements;

    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> value[i];
        uElements.insert(value[i]);
    }
    ll count = 1;
    ll countf = 1;
    ll start = 1;
    ll index = 0;
    if (uElements.size() > (n / 2))
    {
        cout << "-1\n";
        return;
    }
    else
    {
        for (int i = 1; i < n; i++)
        {
            if (value[i] == value[i - 1])
            {
                count++;
                countf++;
            }
            else if (count < 2)
            {
                cout << "-1\n";
                return;
            }
            else
            {
                v[index] = countf;
                index++;
                start = countf - count + 1;
                for (int i = start; i < countf; i++)
                {
                    v[index] = i;
                    index++;
                }
                 countf +=  1;
                count = 1;
            }
        }
    }

    if (count < 2)
    {
        cout << "-1\n";
        return;
    }
    else
            {
                v[index] = countf;
                index++;
                start = countf - count + 1;
                for (int i = start; i < countf; i++)
                {
                    v[index] = i;
                    index++;
                }
                 countf +=  1;
                count = 1;
            }
    for(int i = 0; i < n; i++)
    cout<<v[i]<<" ";
    cout<<endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}