#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        // if (n == 1)
        // {
        //     if (arr[0] == 1)
        //         cout << "0\n";
        //     else
        //         cout << "1\n";
        // }
        // else
        // {
            int count = 0;
            int countmax = 0;

            for (int i = 0; i < n; i++)
            {
                if (arr[i] == 0)
                {
                    count++;
                    if (i == n - 1)
                    {
                        if (count > countmax)
                            countmax = count;

                        count = 0;
                    }
                }
                else
                {
                    if (count > countmax)
                        countmax = count;

                    count = 0;
                }
            }
            cout << countmax << "\n";
        // }
    }
    return 0;
}