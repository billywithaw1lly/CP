#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


void solve(){
    string a,b;
    cin>>a>>b;

    int lenA = a.length();
    int lenB = b.length();

    int res = 0;
        for(int i = 1; i <= min(lenA,lenB) ; i++){
            for(int j = 0; j + i <= lenA; j++){
                for (int k = 0; k + i <= lenB; k++){

                    if (a.substr(j, i) == b.substr(k, i))
                    res = max(res, i);
                }
            }
        }
        cout << a.size() + b.size() - 2 * res << "\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--)
    solve();
    return 0;
}