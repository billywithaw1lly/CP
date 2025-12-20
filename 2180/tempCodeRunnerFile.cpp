#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr)
#define nl "\n"
using vi = vector<int>;
using vvi = vector<vector<int>>;
using vii = vector<pair<int, int>>;
using vll = vector<pair<ll, ll>>;

int T;

// void find(int n){
    
// }

void solve()
{
    //factor of n = a1 ^ a2 ^ a3 ^........ ^ ak
    // (if you are seein this code the comment was left for my better understanding, its not a mistake and i dont use LLMs, thank you)
    int n, k; 
    cin >> n >> k;
    if(k % 2 == 1){
        for(int i = 0; i < k; i++) cout << n << " ";
        cout << nl;
        return;
    }

    // if(k == 2){
    //     cout << 0 << " " << n << nl;
    //     return;
    // }

    // int a = 0, b = 0;
    // for (int i = n; i >= 0; i--)
    // {
    //     for (int j = n - 1; j >= 0; j--)
    //     {
    //         int temp = i ^ j;
    //         if (temp == n)
    //         {
    //             if ((i + j) > (a + b))
    //                 a = i, b = j;
    //         }
    //     }
    // }

    int m = 31 - __builtin_clz(n);
    int p = (1 << m);

    if (p == n)
    {
        cout << 0 << " " << n << " ";
    }
    else
    {
        int remainder = n - p; 
        int m2 = 31 - __builtin_clz(remainder);
        int x = p | ((1 << m2) - 1);
        int y = n ^ x;
        cout << x << " " << y << " ";
    }
    for (int i = 0; i < k - 2; i++)
    {
        cout << n << " ";
    }
    cout << nl;
}

int main()
{
    fastio;
    int t;
    cin >> t;

    for (T = 1; T <= t; T++)
    {
        solve();
    }

    return 0;
}