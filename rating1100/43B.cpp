#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);

    map<char, int> freq1, freq2;

    for(char c : s1){
        if(c != ' ')
            freq1[c]++;
    }

    for(char c : s2){
        if(c != ' ')
            freq2[c]++;
    }

    bool possible = true;
    for(auto [ch, count] : freq2){
        if(freq1[ch] < count){
            possible = false;
            break;
        }
    }

    if(possible)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}
