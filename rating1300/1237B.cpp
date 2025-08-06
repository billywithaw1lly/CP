#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

int main()
{
    fastio;
    int n;
    cin >> n;

    vector<int> in(n), out(n);
    for (auto &x : in)
        cin >> x;
    for (auto &x : out)
        cin >> x;

    set<int> seen;
    int i = 0, j = 0;
    while (j < n && i < n)
    {
        if (in[i] == out[j])
        {
            i++;
            j++;
        }
        else{
            if (seen.count(in[i]))
            {
                i++;
            }
            else
            {
                seen.insert(out[j]);
                j++;
            }
        }
    }
    cout << seen.size() << "\n";
    return 0;
}
