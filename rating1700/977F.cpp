#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
using vi = vector <int>;

#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr)

const int MOD = 1000000007;
const int MAXN = 100005;

//vector<int> dp(MAXN);
vector<int> pref(MAXN);

int n, len, start;
map<int, int> dp;
vi ans;

int main()
{
    fastio;

    int n; cin>>n;
    vi a(n);

    for(auto &it : a)
        cin >> it;

    for(int i = 0; i < n; i++){

        int x = a[i];
        dp[x] = max(dp[x], 1);
        dp[x] = max(dp[x], (dp[x - 1] + 1));
        
        if(dp[x] > len){
            len = dp[x];
            start = x - dp[x] + 1;
        }
    }

    for(int i = 0; i < n; i++){
        if(a[i] == start){
            ans.push_back(i + 1);
            start++;
        }
    }
    
    cout << len << '\n';
    for(auto it : ans)
        cout << it << " ";
    cout << '\n';

    return 0;
}
