#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define fastread                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);

void solve(){
    ll n; cin>>n;
    string s; cin>>s;

    int cnt_0 = 0;
    for (int i = 0; i < n; i++)
    {
        cnt_0 += s[i] == '0';
    }
    if (cnt_0 == 1)
    {
        cout << "BOB\n";
        return;
    }
    if (cnt_0 % 2)
    {
        cout << "ALICE\n";
        return;
    }
    cout << "BOB\n";
    return;
}

int main()
{
    fastread;
    ll t; cin>>t;

    while(t--) solve();

    return 0;
}
