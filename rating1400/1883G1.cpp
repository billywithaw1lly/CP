#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr)

void solve()
{
    fastio;
    ll n, m;
    cin>>n>>m;

    vector<int> a, b;

    a.push_back(1);

    for(int i = 0; i < n - 1; i++){
        int k; cin>>k;
        a.push_back(k);
    }

    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        b.push_back(k);
    }

    sort(rbegin(a), rend(a));
    sort(begin(b), end(b));
    int count1 = 0;

    for(int i = 0; i < n; i++){
        if(a[i] <= b[i])
        count1++;
    }

    sort(begin(a), end(a));
    int count2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= b[i])
            count2++;
    }

    cout<<min(count1, count2)<<endl;

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