#include <bits/stdc++.h>
#include <algorithm>
#include <numeric>
typedef long long ll;
using namespace std;

void solve(){
    ll a, b;
    ll g, moves;
    cin >> a >> b;
    if (a == b){
        cout <<"0 0\n";
    }
    else{
        g = abs(a - b);
        moves = min(a%g,g-a%g);
    }
    ll result = gcd(a, b);  
    cout << result << "\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; 
    cin >> t;
    while (t--) {
        solve(); 
    }

    return 0;
}