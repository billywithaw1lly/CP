#include <bits/stdc++.h>
using namespace std;

#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int &x : v)
        cin >> x;

    int left = 0, right = n - 1;
    int alice = 0, bob = 0;
    int lastAlice = 0, lastBob = 0;
    int moves = 0;
    bool isAliceTurn = true;

    while (left <= right)
    {
        int curr = 0;
        if (isAliceTurn)
        {
            while (left <= right && curr <= lastBob)
            {
                curr += v[left];
                left++;
            }
            alice += curr;
            lastAlice = curr;
        }
        else
        {
            while (left <= right && curr <= lastAlice)
            {
                curr += v[right];
                right--;
            }
            bob += curr;
            lastBob = curr;
        }
        moves++;
        isAliceTurn = !isAliceTurn;
    }

    cout << moves << " " << alice << " " << bob << "\n";
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
