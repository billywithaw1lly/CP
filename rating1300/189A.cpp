#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define fastread                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);

int main()
{
    int n, a, b, c;
    cin >> n >> a >> b >> c;

    int maxPieces = 0;

    for (int A = 0; A <= n / a; ++A)
    {
        for (int B = 0; B <= (n - A * a) / b; ++B)
        {
            int remaining = n - (A * a + B * b);
            if (remaining < 0)
                continue;

            if (remaining % c == 0)
            {
                int C = remaining / c;
                maxPieces = max(maxPieces, A + B + C);
            }
        }
    }

    cout << maxPieces << '\n';
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
