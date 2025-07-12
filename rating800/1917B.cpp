
#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    long t; cin >> t;
    while(t--){
        long n; cin >> n;
        string s; cin >> s;
        set<char> u; long cnt(0);
        for(long p = 0; p < s.size(); p++){
            u.insert(s[p]);
            cnt += u.size();
        }
        cout << cnt << "\n";
    }
    return 0;
}