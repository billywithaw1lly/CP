#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        ll a, b, n;
        cin >> a >> b >> n;
        ll arr[n];

        ll sum = b ;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];

            if (arr[i] + 1 > a)
                sum = sum + a - 1;
            else
                sum = sum + arr[i];
        }
        cout<<sum<<"\n";
    }
    return 0;
}