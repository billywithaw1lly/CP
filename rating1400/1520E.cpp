#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr)

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<int> sheeps;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '*')
        {
            sheeps.push_back(i);
        }
    }

    int index = (sheeps.size() - 1) / 2;

    long long ans = 0;
    
    for (int i = 0; i < sheeps.size(); i++)
    {
        ans += abs(sheeps[i] - (sheeps[index] - index + i));
    }

    cout << ans << '\n';
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