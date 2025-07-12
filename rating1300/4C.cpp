#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define fastread                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);

int main(){
    int n; cin>>n;
    unordered_map<string, int> db;

    while (n--)
    {
        string s;
        cin >> s;

        if (db.find(s) == db.end())
        {
            db[s] = 1;
            cout << "OK\n";
        }
        else
        {
            string new_name = s + to_string(db[s]);
            while (db.find(new_name) != db.end())
            {
                db[s]++;
                new_name = s + to_string(db[s]);
            }
            cout << new_name << "\n";
            db[new_name] = 1;
            db[s]++;
        }
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
