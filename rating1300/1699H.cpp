#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr)

void solve()
{
    fastio;
    int n, k;
    cin >> n >> k;

    vector <int> arr(n), cnt(31, 0);

    for(int i = 0; i < n; i++){
        cin>>arr[i];
        for(int j = 30; j >= 0; j--){
            if(arr[i] & (1 << j)) ++cnt[j];
        }
    }
    int ans = 0;

    for(int i = 30; i >= 0; i--){
        int need = n - cnt[i];
        if(need <= k){
            k -= need;
            ans += (1 << i);
        }
    }
    cout<<ans<<endl;
    return;
}

int main()
{
    fastio;
    int t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}