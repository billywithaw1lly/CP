#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr)

void solve(){
    fastio;
    int n; cin>>n;

    vector<pair<int, int>> arr(n);

    for(int i = 0; i < n; i++){
        cin>>arr[i].first;
        cin>>arr[i].second;
    }
    
}

int main(){
    fastio;
    int t; cin>>t;
    while(t--)
    solve();

    return 0;
}