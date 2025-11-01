#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

int main()
{
    fastio;

    string s;
    int a, b;
    cin >> s >> a >> b;

    int n = s.size();
    vector<bool> checkL(n, false), checkR(n, false);

    ll remA =  0;
    for(int i = 0; i < n; i++){
        remA = (remA * 10 + (s[i] - '0')) % a;

        if(remA == 0) checkL[i] = true;
    }

    ll remB = 0, power = 1;
    for(int i = n - 1; i >= 0; i--){

        remB = ((s[i] - '0') * power + remB) % b;
        
        if(remB == 0) checkR[i] = true;
        power = (power * 10) % b;

    }

    for(int i = 0; i < n - 1; i++){
        if(checkL[i] && checkR[i + 1] && s[i+1] != '0'){
            cout<<"YES\n";
            cout<<s.substr(0, i + 1)<<'\n';
            cout<<s.substr(i + 1)<<'\n';
            return 0;
        }
    }
    cout<<"NO\n";
    return 0;
}
