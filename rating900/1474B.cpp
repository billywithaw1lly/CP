#include <bits/stdc++.h>

using namespace std;

bool is_prime(int num){
    for(int i = 2; i*i <= num; i++){
        if (num % i == 0) return false;
    }
    return true;
}

int nextPrime(int x){
    for(int num = x; ; num++){
        if(is_prime(num))
        return num;
    }
    return -1;
}

void solve(){
    int d;
    cin>>d;
    int p = nextPrime(d + 1);
    int q = nextPrime(p + d);

    cout<<min(1LL*p*p*p, 1LL*p*q)<<endl;
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