#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    string str;
    ll k;

    cin>>str>>k;

    ll n = str.size();

    reverse (str.begin(), str.end());

    ll countZero = 0;
    ll count = 0;
    for(int i = 0; i < n; i++){

        if (countZero == k){
            cout<<count<<endl;
            return 0;
        }
        else if(i == n - 1){
            cout<<n-1<<endl;
            return 0;
        }
        
        if(str[i] == '0')
        countZero++;
        else
        count++;
    }

}