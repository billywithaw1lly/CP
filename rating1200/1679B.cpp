#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastread                 \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

int main()
{
    fastread;

    ll n, q;
    cin >> n >> q;

    vector<ll> arr(n);
    vector<int> last_updated(n, 0);
    ll sum = 0;

    for (ll &x : arr)
    {
        cin >> x;
        sum += x;
    }

    ll current_time = 0;
    ll default_val = -1;

    while (q--)
    {
        int type;
        cin >> type;

        if (type == 1)
        {
            ll idx, val;
            cin >> idx >> val;
            idx--;

            // Check if index was last set before the last global update
            if (last_updated[idx] < current_time)
            {
                // The value at arr[idx] is actually default_val
                sum -= default_val;
            }
            else
            {
                sum -= arr[idx];
            }

            arr[idx] = val;
            last_updated[idx] = current_time;
            sum += val;

            cout << sum << "\n";
        }
        else if (type == 2)
        {
            ll val;
            cin >> val;

            // Set a new global value
            default_val = val;
            current_time++; // Increase time so we can detect which values are old
            sum = val * n;

            cout << sum << "\n";
        }
    }

    return 0;
}
