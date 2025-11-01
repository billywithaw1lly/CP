#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);
    vector<int> b(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++)
        cin >> b[i];

    vector<pair<int, int>> c(n);

    for (int i = 0; i < n; i++)
    {
        c[i].first = a[i] - b[i];
        c[i].second = i + 1;
    }

    sort(c.begin(), c.end());

    int count = 1;
    
    int i = n - 1;
    while(true){
        if(c[i].first == c[i - 1].first){
            count++;
            i--;
        } 
        else break;
    }

    cout << count << endl;

    for (int i = n - count; i < n; i++)
    {
        cout << c[i].second << " ";
    }
    cout << endl;
}

int main()
{
    fastio int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
