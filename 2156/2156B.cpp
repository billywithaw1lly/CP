// brute force
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define fastread                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);

using vi = vector<int>;
using vvi = vector<vector<int>>;

const int MOD = 1e7 + 9;

ll n;
string s;
const int N = 2e5 + 1;
ll dp[N][3][3];

void solve()
{
    ll n, q;
    cin >> n >> q;

    string s;
    cin >> s;

    ll a = count(s.begin(), s.end(), 'A');

    vi que(q);
    vi ans;
    for (auto &it : que)
        cin >> it;

    for (int i = 0; i < q; i++)
    {
        int type = que[i];
        int count = 0;
        int it = 0;
        if (a == n)
        {
            cout << que[i] << endl;
            continue;
        }
        while (true)
        {
            if (type <= 0)
            {
                ans.push_back(count);
                break;
            }

            if (s[it] == 'A')
            {
                type--;
                count++;
                if (type <= 0)
                {
                    ans.push_back(count);
                    break;
                }
            }
            else
            {
                type /= 2;
                count++;
                if (type <= 0)
                {
                    ans.push_back(count);
                    break;
                }
            }
            it++;

            if (it >= n)
                it = 0;
        }
    }

    for (int a : ans)
        cout << a << endl;

    return;
}

int main()
{
    fastread;
    int t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}