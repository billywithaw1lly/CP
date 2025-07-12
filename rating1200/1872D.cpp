#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    ll n, x, y;
    cin>>n>>x>>y;

    ll xTerms = n / x;
    ll yTerms = n / y;
    ll c = lcm(x,y);
    ll commonTerms = n / c;
    xTerms -= commonTerms;
    yTerms -= commonTerms;
    //testing
    // cout<<commonTerms<<endl;
    // cout<<xTerms<<endl;
    // cout<<yTerms<<endl;

    ll xIn = (2 * n - xTerms + 1) * xTerms;
    ll yIn = (yTerms + 1) * yTerms;

    // cout<<xIn<<endl;
    // cout<<yIn<<endl;

    ll sumX = xIn / 2;
    ll sumY = yIn / 2;

    // cout<<"both sums"<<endl;
    // cout<<sumX<<endl;
    // cout<<sumY<<endl;

    cout<<sumX-sumY<<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll  t; cin>>t;
    while(t--)
    solve();

    return 0;
}