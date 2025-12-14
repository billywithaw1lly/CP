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

int binSearch(int low, int high, vii &arr, int n)
{
    while (low < high)
    {
        int mid = (low + high) / 2;
        bool poss = true;

        int curL = 0;
        int curR = 0;

        for (int i = 0; i < n; i++)
        {
            curL -= mid;
            curR += mid;

            curL = max(curL, arr[i].first);
            curR = min(curR, arr[i].second);

            if (curL > curR)
            {
                poss = false;
                break;
            }
        }
        if (poss)
            high = mid;
        else
            low = mid + 1;
    }
    return low;
}

void solve(){
    int n; cin>>n;

    vii arr(n);
    int high = 1e9;
    for(int i = 0; i < n; i++){
        cin>>arr[i].first;
        cin>>arr[i].second;
    }
    int low = 0;
    int ans = binSearch(low, high, arr, n);

    cout << ans << nl;

    return;
}

int main(){
    fastio;
    int t; cin>>t;
    while(t--)
    solve();

    return 0;
}