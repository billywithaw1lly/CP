#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
using vi = vector<int>;

#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr)

const int MOD = 1000000007;
const int MAXN = 100005;

vector<int> pref(MAXN);
int dp[1000001];
vector<int> s;

int ans(int val){
    
    for(int i = 1; i <= val; i++)
        for(int j = i * 2; j <= val; j += i)
            if(s[i] < s[j])
                dp[j] = max(dp[j], dp[i] + 1);

    int k = *max_element(dp + 1, dp + val + 1);
    return k;
}

void solve(){
    int n;
    cin >> n;
    s.clear();
    s.resize(n + 1);

    for(int i = 1; i <= n; i++) cin >> s[i];

    for(int i = 1; i <= n; i++){
        dp[i] = 1;
    }

    cout << ans(n) << endl;
}


int main()
{
    fastio;

    int t; cin>>t;
    while (t--)
    solve();
}