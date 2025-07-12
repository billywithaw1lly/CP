#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    ll n1, m1; cin>>n1>>m1;
    ll n2, m2; cin>>n2>>m2;
    ll n3, m3; cin>>n3>>m3;


    // ll sq1 = n1 * m1;
    // ll sq2 = n2 * m2;
    // ll sq3 = n3 * m3;

    // ll sq = sq1 + sq2 + sq3;

    // ll side = sqrt(sq);

    // if (side * side == sq){
    //     cout<<"YES\n";
    // }
    // else
    // cout<<"NO\n";

    ll greatestN = max (n1, max(n2, n3));
    //cout<<greatestN<<endl;
    ll leastN = min (n1, min(n2, n3));
    //cout<<leastN<<endl;
    ll midN = n1 + n2 + n3 - (greatestN + leastN);
    //cout<<midN<<endl;

    ll greatestM = max (m1, max(m2, m3));
    //cout<<greatestM<<endl;
    ll leastM = min (m1, min(m2, m3));
    //cout<<leastM<<endl;
    ll midM = m1 + m2 + m3 - (greatestM + leastM);
    //cout<<midM<<endl;

    if(greatestN == (midN + leastN) && (greatestM + midM == greatestN))
    cout<<"YES\n";
    else if(greatestM == (midM + leastM) && (greatestN + midN == greatestM))
    cout<<"YES\n";
    else if( (m1 + m2 + m3) == n1 && (n1 == n2 && n2 == n3))
    cout<<"YES\n";
    else if( (n1 + n2 + n3) == m1 && (m1 == m2 && m2 == m3))
    cout<<"YES\n";
    else
    cout<<"NO\n";

    return;
}

int main(){
    ll t; cin>>t;

    while(t--)
    solve();

    return 0;
}