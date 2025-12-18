#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr)
#define nl "\n"
using vi = vector<int>;
using vvi = vector<vector<int>>;
using vii = vector<pair<int, int>>;
using vll = vector<pair<ll, ll>>;

int T;

void solve()
{
    int n; cin >> n;
    vi a(n);
    for(auto &it : a)
        cin >> it;
    
    map<int, int> freq;
    
    for(int i = 0; i < n; i++){
        freq[a[i]]++;
    }
    //testing
    // for(auto &it : freq){
    //     cout << it.first << " " << it.second << nl;
    // }
    //

    vi results;

    for(auto &it : freq){
        results.push_back(it.second);
    }
    sort(results.rbegin(), results.rend());

    //
    // cout << "results" << nl;
    // for(auto &it : results) cout << it << " ";
    // cout << nl;
    //

    for(int i = 1; i < results.size(); i++){
        if(results[i] >= results[i - 1])
        results[i] = results[i - 1] - 1;
    }

    //
    // cout << "results" << nl;
    // for (auto &it : results)
    //     cout << it << " ";
    // cout << nl;
    //

    int sum = 0;
    for(auto &it : results) if(it >= 0) sum += it;

    cout << sum << nl;
}

int main()
{
    fastio;
    int t;
    cin >> t;

    for (T = 1; T <= t; T++)
    {
        solve();
    }

    return 0;
}