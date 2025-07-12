#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;
    string str;
    cin >> str;

    vector<ll> s1, s2;

    for (int i = 0; i < n; i++) {
            s1.push_back(str[i] - '0');
    }
    for (int i = n; i < 2*n; i++){
        s2.push_back(str[i] - '0');
    }

    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    int flag=0;
    for(int i=0;i<n;i++){

        if(s1[0]>s2[0]) flag=1;

        else if(s1[0]<s2[0]) flag=2;

        if(flag==1){
            if(s1[i]>s2[i]) continue;
        else{
            flag=0;
            break;
        }
    }
    else if(flag==2){
        if(s1[i]<s2[i])continue;

        else{
            flag=0;
            break;
        }
    }
 
    }
    if(flag==0) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;

    return 0;
}
