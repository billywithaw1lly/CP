#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr)

int main()
{
    fastio;
    ll n;
    cin >> n;
    vector<ll> arr(n);
    for (ll i = 0; i < n; i++)
        cin >> arr[i];

    ll total = accumulate(arr.begin(), arr.end(), 0LL);//nice
    if (total % 3 != 0)
    {
        cout << 0 << "\n";
        return 0;
    }

    ll target = total / 3;
    ll prefix = 0;
    ll countTarget = 0;
    ll ways = 0;

    for (ll i = 0; i < n - 1; i++)
    {
        prefix += arr[i];
        if (prefix == 2 * target)
        {
            ways += countTarget;
        }
        if (prefix == target)
        {
            countTarget++;
        }
    }

    cout << ways << "\n";
    return 0;
}


//why wrong
// #include <bits/stdc++.h>
// using namespace std;

// typedef long long ll;
// #define fastio                   \
//     ios::sync_with_stdio(false); \
//     cin.tie(nullptr)

// int main()
// {
//     fastio;
//     ll n;
//     cin >> n;

//     vector<ll> arr(n);
//     vector<ll> pre(n);

//     ll sum = 0;
//     for (ll i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//         sum += arr[i];
//     }

//     if (sum % 3 != 0)
//     {
//         cout << 0 << "\n";
//         return 0;
//     }

//     ll target = sum / 3;

//     pre[0] = arr[0];

//     for (ll i = 1; i < n; i++)
//     {
//         pre[i] = pre[i - 1] + arr[i];
//     }

//     if (sum != 0)
//     {
//         ll a = 0, b = 0, c = 0;
//         for (ll i = 0; i < n; i++)
//         {
//             if (pre[i] == target)
//                 a++;
//             if (pre[i] == 2 * target)
//                 b++;
//             if (pre[i] == 3 * target)
//                 c++;
//         }
//         cout << a * b * c << endl;
//         return 0;
//     }
//     ll count = 0;

//     for (ll i = 0; i < n; i++)
//     {
//         if (pre[i] == 0)
//             count++;
//     }
//     ll ans = ((count - 1) * (count - 2)) / 2;
//     cout << ans << "\n";
//     return 0;
// }