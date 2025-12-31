#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr)
#define nl "\n"
using vi = vector<int>;
using vll = vector<long long>;
using vvi = vector<vector<int>>;
using vpii = vector<pair<int, int>>;
using vpll = vector<pair<ll, ll>>;
#define pb push_back
int T;
// the failing attempt
// may the kermit bless me


// bool eight(char l, char m, char r){
//     string sn = "";
//     sn += l;
//     sn += m;
//     sn += r;
//     int num = stoi(sn);

//     if(num % 8 == 0 || num == 0)
//     return true;
//     else return false;
// }

// void solve()
// {
//     string s; cin >> s;
//     bool possible = false;

//     while(s.size() > 3){
//         int n = s.size();

//         possible = eight(s[n - 3], s[n - 2], s[n - 1]); //
//         if (possible)
//         {
//             cout << "YES" << nl;
//             return;
//         }
//         possible = eight(s[n - 4], s[n - 3], s[n - 1]); // chaning mid
//         if (possible)
//         {
//             cout << "YES" << nl;
//             return;
//         }
//         possible = eight(s[n - 4], s[n - 2], s[n - 1]); // changing left
//         if (possible)
//         {
//             cout << "YES" << nl;
//             return;
//         }
//         s.pop_back();
//     }
//     if(s.size() <= 3){
//         if(stoi(s) % 8 == 0 || stoi(s) == 0)
//         cout << "YES" << nl;
//         return;
//     }

//     cout << "NO" << nl;
// }

void solve()
{
    string s;
    cin >> s;
    int n = s.size();

    for (int i = 0; i < n; i++)
    {
        int num = s[i] - '0';
        if (num % 8 == 0)
        {
            cout << "YES" << nl << num << nl;
            return;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
            continue;

        for (int j = i + 1; j < n; j++)
        {
            int num = (s[i] - '0') * 10 + (s[j] - '0');
            if (num % 8 == 0)
            {
                cout << "YES" << nl << num << nl;
                return;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
            continue;

        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                int num = (s[i] - '0') * 100 + (s[j] - '0') * 10 + (s[k] - '0');
                if (num % 8 == 0)
                {
                    cout << "YES" << nl << num << nl;
                    return;
                }
            }
        }
    }

    cout << "NO" << nl;
}
int main()
{
    fastio;
    int t = 1;
    //cin >> t;

    for (T = 1; T <= t; T++)
    {
        solve();
    }

    return 0;
}