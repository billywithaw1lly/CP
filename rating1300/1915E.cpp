#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);


void solve(){
    int n;
    cin >> n;
    vector<int> a(n);

    for (int &x : a)
        cin >> x;

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 1)
            a[i] = -a[i];
    }

    unordered_map<int, int> prefixIndex;
    prefixIndex[0] = 0;

    int prefixSum = 0;
    for (int i = 0; i < n; i++)
    {
        prefixSum += a[i];

        if (prefixIndex.count(prefixSum))
        {
            int l = prefixIndex[prefixSum] + 1;
            int r = i + 1;
            cout << "YES\n";
            return;
        }
        else
        {
            prefixIndex[prefixSum] = i + 1;
        }
    }

    cout << "NO\n";
}

int main()
{
    fastio;
    int t; cin>>t;

    while(t--)
    solve();
    return 0;
}
