#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define fastread                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);

int main()
{
    fastread;
    int n;
    cin >> n;
    vector<ll> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int l = 0, r = n - 1;
    while (l < n - 1 && v[l] <= v[l + 1])
    {
        l++;
    }
    if (l == n - 1)
    {
        cout << "yes\n1 1\n";
        return 0;
    }
    while (r > 0 && v[r] >= v[r - 1])
    {
        r--;
    }
    reverse(v.begin() + l, v.begin() + r + 1);

    if (is_sorted(v.begin(), v.end()))
    {
        cout << "yes\n"
             << l + 1 << " " << r + 1 << "\n";
    }
    else
    {
        cout << "no\n";
    }

    return 0;
}
