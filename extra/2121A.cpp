#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastread                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);

#define f(i, a, b) for (int i = a; i < b; i++)
#define pb push_back

void solve()
{
    ll n, s;
    cin>>n>>s;
    vector<ll> arr(n);

    for(auto &k : arr)
    cin>>k;

    if( s <= arr[0] && s < arr[n-1]){
        cout<<abs(arr[n-1] - s)<<endl;
        return;
    }
    else if(s > arr[0] && s >= arr[n - 1]){
        cout << abs(arr[n - 1] - s) << endl;
        return;
    }
    else if(s >= arr[0] && s <= arr[n-1]){
        ll tempL = abs(s - arr[0]);
        ll tempR = abs(s - arr[n-1]);

        if(tempR >= tempL){
            cout<<tempL + arr[n - 1] - arr[0]<<endl;
            return;
        }
        else{
            cout << tempR + arr[n - 1] - arr[0]<< endl;
            return;
        }
    }
}

int main()
{
    fastread;
    ll t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
