#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define fastread                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);

bool isPrime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}

int main()
{
    int n;
    cin >> n;
    vector<ll> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    for (int i = 0; i < n; i++)
    {
        ll x = v[i];
        ll root = sqrt(x);
        if (root * root == x && isPrime(root)) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}

// int main()
// {
//     fastread;
//     int t; cin>>t;

//     while(t--){
//         solve();
//     }

//     return 0;
// }
