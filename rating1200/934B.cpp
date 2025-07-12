#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n; cin>>n;

    if(n < 37){
        if( n == 1)
        cout<<"6"<<endl;

        else if(n % 2 == 0){
            for(int i = 0; i < (n / 2); i++)
            cout<<"8";
            cout<<endl;
        }
        else{
            for(int i = 0; i < ((n - 1)/ 2); i++)
            cout<<"8";
            cout<<"0";
            cout<<endl;
        }
    }
    else
    cout<<"-1";
    cout<<endl;
    return 0;
}