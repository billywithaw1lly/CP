#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; string s;
    cin>>n;
    cin>>s;

    for(int i = 1; i < int(s.size()); i++){
        if(s[i] < s[i - 1]){
            cout<<"YES\n";
            cout<<i<<" "<<i+1<<endl;
            return 0;
        }
    }
    cout<<"NO\n";
    return 0;
}