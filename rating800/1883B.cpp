#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    const int B = 26;

    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string str;
        cin >> str;
        // int count = 0;
        // sort(str.begin(), str.end());
        // if ((n - k) == 1)
        //     cout << "YES\n";
        // else
        // {
        //     for (int i = 1; i < n; i++)
        //     {
        //         if (str[i - 1] == str[i] && i == (n - 1))
        //             count += 2;

        //         else if (str[i - 1] == str[i] && i != (n - 1))
        //             count++;
        //     }
        //     if (k > (count - 1))
        //     {
        //         if ((n-count) % 2 == 0)
        //         cout<<"YES\n";
        //         else
        //         cout<<"NO\n";
        //     }
        //     else
        //     {
        //         if ((count - k) == 1 || (count - k) == 2)
        //             cout << "YES\n";
        //         else
        //             cout << "NO\n";
        //     }
        // }
        int v[B] = {0};
        for (long p = 0; p < str.size(); p++)
        {
            ++v[str[p] - 'a'];
        }
        long cnt(0);
        for (long p = 0; p < B; p++)
        {
            cnt += v[p] % 2;
        }
        puts(cnt <= k + 1 ? "YES" : "NO");
    }
    return 0;
}