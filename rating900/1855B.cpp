#include <bits/stdc++.h>

typedef long long ll;
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; 
    cin >> t;
    while (t--) {
        ll n; cin>>n;
        int i = 1;
        while(n % i == 0)
        i++;
        cout<<i-1<<"\n";
    }

    return 0;
}