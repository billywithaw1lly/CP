#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastread                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);

int binSearch(vector<long long> &pmax, int n, int val)
{
    int low = 0, high = n - 1;
    int ans = -1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (pmax[mid] <= val)
        {
            ans = mid;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return ans;
}

void solve()
{
    fastread;
    int n, q;
    cin >> n >> q;

    vector<ll> nv(n);
    vector<ll> qv(q);
    vector<ll> pre(n + 1);

    pre[0] = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> nv[i];
        pre[i + 1] = pre[i] + nv[i];
        if (i > 0)
        {
            if (nv[i] < nv[i - 1])
                nv[i] = nv[i - 1];
        }
    }

    for (int i = 0; i < q; i++)
        cin >> qv[i];

    for (int i = 0; i < q; i++)
    {
        int val = qv[i];

        int ind = binSearch(nv, n, val);
        if (ind == -1)
            cout << "0 ";
        else
            cout << pre[ind + 1] << " ";
    }
    cout << "\n";
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
