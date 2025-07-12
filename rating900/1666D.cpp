#include <bits/stdc++.h>

using namespace std;

void solve(){
    string s, t;
    cin>>s>>t;

    int n = s.size();
    int m = t.size();

    vector <int> f (26, 0);
    for(int  i = 0; i < m; i++)
    f[t[i] - 'A']++;

    for(int i = n - 1; i >= 0; i--){
        if(f[s[i] - 'A'] > 0)
        f[s[i] - 'A']--;
        else
        s[i] = '.';
    }

    string final = "";

    for(int i = 0; i < n; i++)
    if(s[i] != '.')
    final += s[i];

    if (final == t)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t; cin>>t;

    while(t--){
        solve();
    }
    return 0;
}