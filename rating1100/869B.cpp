#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ll a , b;
    cin>>a>>b;

    ll loop = b - a;

    if ( loop  < 10){
        ll pro = 1;
    for(int i = 0; i < loop; i++){
        pro *= (b % 10);
        b--;
    }
    cout<<pro % 10<<endl;
    }
    else
    cout<<0<<endl;
    return 0;
}