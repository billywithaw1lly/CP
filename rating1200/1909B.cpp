#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastread                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);

void solve()
{
    fastread;
    int n;
    cin >> n;

    vector<ll> arr(n);
    
    for(int i = 0; i < n; i++) cin>>arr[i];

    for(int k = 0; k < 60; k++){
        set<int> s;
        for (int i = 0; i < n; i++)
        {
            int bit = (arr[i] >> k) & 1;
            s.insert(bit);
        }
        if(s.size() == 2){
            cout << (1LL << (k + 1)) << endl;
            return;
        }
    }
    return;

}

int main()
{
    fastread;
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
