// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// #define fastread                  \
//     ios_base::sync_with_stdio(0); \
//     cin.tie(0);

// ll simulate(ll i, ll r, ll sum, ll s, ll n, vector<ll> &arr)
// {
//     while (i <= r)
//     {
//         if (sum == s)
//         {
//             return i + (n - r - 1);
//         }
//         if (arr[i] == 1)
//         {
//             sum--;
//             i++;
//         }
//         else if (arr[r] == 1)
//         {
//             sum--;
//             r--;
//         }
//         else
//         {
//             ll k = i, q = r;
//             while (k < n && arr[k] == 0)
//                 k++;
//             while (q >= 0 && arr[q] == 0)
//                 q--;

//             if (k > q)
//                 return -1;

//             ll left = k - i;
//             ll right = r - q;

//             if (left < right)
//             {
//                 i = k;
//             }
//             else if (right < left)
//             {
//                 r = q;
//             }
//             else
//             {
//                 ll t1 = simulate(k, r, sum, s, n, arr);
//                 ll t2 = simulate(i, q, sum, s, n, arr);
//                 return max(t1, t2);
//             }
//         }
//     }
//     return -1;
// }

// void solve()
// {
//     ll n, s;
//     cin >> n >> s;

//     vector<ll> arr(n);
//     ll sum = 0;
//     for (auto &a : arr)
//     {
//         cin >> a;
//         sum += a;
//     }

//     if (sum < s)
//     {
//         cout << -1 << endl;
//         return;
//     }

//     ll i = 0, r = n - 1;

//     while (i <= r)
//     {
//         if (sum == s)
//         {
//             cout << i + (n - r - 1) << endl;
//             return;
//         }

//         if (arr[i] == 1)
//         {
//             sum--;
//             i++;
//         }
//         else if (arr[r] == 1)
//         {
//             sum--;
//             r--;
//         }
//         else
//         {
//             ll k = i, q = r;
//             while (k < n && arr[k] == 0)
//                 k++;
//             while (q >= 0 && arr[q] == 0)
//                 q--;

//             if (k > q)
//             {
//                 cout << -1 << endl;
//                 return;
//             }

//             ll left = k - i;
//             ll right = r - q;

//             if (left < right)
//             {
//                 i = k;
//             }
//             else if (right < left)
//             {
//                 r = q;
//             }
//             else
//             {
//                 ll t1 = simulate(k, r, sum, s, n, arr);
//                 ll t2 = simulate(i, q, sum, s, n, arr);

//                 if (t1 == -1 && t2 == -1)
//                 {
//                     cout << -1 << endl;
//                     return;
//                 }
//                 else if (t1 == -1)
//                 {
//                     i = k;
//                 }
//                 else if (t2 == -1)
//                 {
//                     r = q;
//                 }
//                 else if (t1 >= t2)
//                 {
//                     r = q;
//                 }
//                 else
//                 {
//                     i = k;
//                 }
//             }
//         }
//     }

//     cout << -1 << endl;
// }

// int main()
// {
//     fastread;
//     int T;
//     cin >> T;
//     while (T--)
//     {
//         solve();
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastread                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);

void solve()
{
    ll n, s;
    cin >> n >> s;

    vector<ll> arr(n);
    for (ll &x : arr)
        cin >> x;

    ll l = 0, sum = 0, max_len = -1;

    for (ll r = 0; r < n; r++)
    {
        sum += arr[r];

        while (l <= r && sum > s)
        {
            sum -= arr[l];
            l++;
        }

        if (sum == s)
        {
            max_len = max(max_len, r - l + 1);
        }
    }

    if (max_len == -1)
    {
        cout << -1 << "\n";
    }
    else
    {
        cout << n - max_len << "\n";
    }
}

int main()
{
    fastread;
    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}
