#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

void solve(){
    int n; cin>>n;
    vector <int> v(n);

    for(int i = 0; i < n; i++)
    cin>>v[i];

    vector<int> ans;

    for(int i = 0; i < n; i++){
        int l = 1, r = i + 1;
        while(l <= r){
            int m = (l + r ) / 2;
            if(v[i - m + 1] >= m){
                l = m + 1;
            } else {
                r = m - 1;
            }
        }
        ans.push_back(r);
    }

    for(int i = 0 ; i < ans.size(); i++)
    cout<<ans[i]<<" ";

    cout<<endl;
}

int main()
{
    fastio

    int t;
    cin >> t;

    while (t--)
    solve();

    return 0;

}
