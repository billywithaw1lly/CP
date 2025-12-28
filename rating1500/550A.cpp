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

void solve()
{
    string s; cin >> s;
    int n = s.size();

    //tle
    // for(int i = 0; i < n - 1; i += 2)
    // {
    //     if(s[i] == 'A' && s[i + 1] == 'B' || s[i] == 'B' && s[i + 1] == 'A')
    //     {
    //         for (int j = i + 2; j < n - 1; j++)
    //         {
    //             if(s[i] == 'A')
    //             {
    //                 if(s[j] == 'B' && s[j + 1] == 'A')
    //                 {
    //                     cout << "YES" << nl;
    //                     return;
    //                 }
    //             }
    //             else
    //             {
    //                 if (s[j] == 'A' && s[j + 1] == 'B')
    //                 {
    //                     cout << "YES" << nl;
    //                     return;
    //                 }
    //             }
    //         }
    //     }
    // }
    // cout << "NO" << nl;
    // return;

    //search AB
    vector<pair<int, int>> AB;
    vector<pair<int, int>> BA;

    for(int i = 0; i < n - 1; i ++){
        if(s[i] == 'A' && s[i + 1] == 'B'){
            AB.pb({i, i + 1});
        }
    }
    for (int i = 0; i < n - 1; i ++){
        if (s[i] == 'B' && s[i + 1] == 'A'){
            BA.pb({i, i + 1});
        }
    }

    if(AB.size() == 0 || BA.size() == 0){
        cout << "NO" << nl;
        return;
    }

    for(auto &s : AB){
        int a1 = s.first, b1 = s.second;
        {
            for(auto &k : BA){
                int a2 = k.second;
                int b2 = k.first;

                if(a1 != a2 && b1 != b2){
                    cout << "YES" << nl;
                    return;
                }
            }
        }
    }

    cout << "NO" << nl;
    return;
}

int main()
{
    fastio;
    int t = 1;
    // cin >> t;

    for (T = 1; T <= t; T++)
    {
        solve();
    }

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// #define fastio                   \
//     ios::sync_with_stdio(false); \
//     cin.tie(nullptr);

// void solve()
// {
//     string s;
//     cin >> s;

//     // SCENARIO 1: Find "AB" first, then "BA"
//     bool found1 = false;
//     size_t first_AB = s.find("AB"); // Find first "AB"

//     // If "AB" exists, look for "BA" starting 2 positions AFTER "AB" found
//     if (first_AB != string::npos)
//     {
//         if (s.find("BA", first_AB + 2) != string::npos)
//         {
//             found1 = true;
//         }
//     }

//     // SCENARIO 2: Find "BA" first, then "AB"
//     bool found2 = false;
//     size_t first_BA = s.find("BA"); // Find first "BA"

//     // If "BA" exists, look for "AB" starting 2 positions AFTER "BA" found
//     if (first_BA != string::npos)
//     {
//         if (s.find("AB", first_BA + 2) != string::npos)
//         {
//             found2 = true;
//         }
//     }

//     if (found1 || found2)
//         cout << "YES\n";
//     else
//         cout << "NO\n";
// }

// int main()
// {
//     fastio;
//     solve();
//     return 0;
// }