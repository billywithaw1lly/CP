#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    string str; cin>>str;

    int countzero = 0;
    int countone = 0;

    for(int i = 0 ; i < str.length(); i++){
        if(str[i] == '0')
        countzero++;
        else
        countone++;
    }
    int p1 = countone * (countone - 1);
    int p2 = countzero * (countone + 1);
    cout<< p1 + p2 <<endl;
    return;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--){
        solve();
    }
}