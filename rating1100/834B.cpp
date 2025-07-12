#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    string str;
    cin >> str;
    unordered_set<char> active;
    unordered_map<char, int> last;

    // string s = "";
    // s += str[0];

    // // Remove consecutive duplicates
    // for (int i = 1; i < n; i++) {
    //     if (str[i] != str[i - 1])
    //         s += str[i];
    // }

    // for (char ch : s)
    //     se.insert(ch);

    // if ((s.size() / k) < se.size() || s.size() == se.size()) 
    //     cout << "NO\n";
    // else
    //     cout << "YES\n";

    // return 0;

    for(int i = 0 ; i < n; i++){
        last[str[i]] = i;
    }
    for(int i = 0; i < n; i++){
        active.insert(str[i]);
        if(active.size() > k){
            cout<<"YES\n";
            return 0;
        }
        if(last[str[i]] == i)
        active.erase(str[i]);
    }
    cout<<"NO\n";
    return 0;
}
