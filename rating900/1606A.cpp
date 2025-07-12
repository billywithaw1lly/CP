#include <bits/stdc++.h>
using namespace std;
int main(){

    long t; cin >> t;
    while(t--){
        string s; cin >> s;
        if(s[0] != s.back()){
            s[0] = s.back();
        }
        cout << s << endl;
    }

}