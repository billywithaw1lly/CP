#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t; cin>>t;
    while(t--){
        ll a,b,c;
        cin>>a>>b>>c;

        if(c%2==0){
            if(a == b)
            cout<<"Second\n";
            else if(a > b)
            cout<<"First\n";
            else
            cout<<"Second\n";
        }
        else{
            if(a == b)
            cout<<"First\n";
            else if (a > b)
            cout<<"First\n";
            else
            cout<<"Second\n";
        }
    }
    return 0;
}