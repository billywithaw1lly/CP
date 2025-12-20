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

int T;

void solve()
{
    int n;
    if (!(cin >> n))
        return;
    vector<ll> x(n);
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }

    if (n < 2)
    {
        cout << 0 << "\n";
        return;
    }
    vector<ll> d(n - 1);
    for (int i = 0; i < n - 1; i++)
    {
        d[i] = x[i + 1] - x[i];
    }

    int count = 0;
    int i = 0;
    while (i < n - 1)
    {

        double L = 0.0;
        double R = (double)d[i];

        if (i > 0)
        {
            R = min(R, (double)d[i - 1]);
        }
        ll slope = 1;
        ll bias = 0;

        int best_end = -1;
        int current_len = 0;

        for (int j = i; j < n - 1; j++)
        {
            ll dist = d[j];

            slope = -slope;
            bias = dist - bias;

            double local_L = L, local_R = R;

            if (slope == 1)
            {
                local_L = max(L, (double)-bias);
            }
            else
            {
                local_R = min(R, (double)bias);
            }

            if (local_L >= local_R)
            {
                break;
            }
            L = local_L;
            R = local_R;
            current_len++;
            bool can_stop = true;
            if (j < n - 2)
            {
                ll gap = d[j + 1];

                double stop_L = L, stop_R = R;
                if (slope == 1)
                {
                    stop_R = min(R, (double)(gap - bias));
                }
                else
                {
                    stop_L = max(L, (double)(bias - gap));
                }

                if (stop_L >= stop_R)
                    can_stop = false;
            }

            if (can_stop)
            {
                best_end = j;
            }
        }

        if (best_end != -1)
        {
            int added_edges = best_end - i + 1;
            count += added_edges;
            i = best_end + 2;
        }
        else
        {
            i++;
        }
    }

    cout << count << "\n";
}

int main()
{
    fastio;
    int t;
    cin >> t;

    for (T = 1; T <= t; T++)
    {
        solve();
    }

    return 0;
}