#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr)

ll binSer(ll target, vector<ll> &priceV)
{
    ll low = 0, high = priceV.size() - 1;
    ll ans = -1;

    while (low <= high)
    {
        ll mid = (low + high) / 2;
        if (priceV[mid] <= target){
            ans = mid;
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return ans;
}

int main()
{
    fastio;
    string recipe;
    cin >> recipe;
    ll b, s, c;
    cin >> b >> s >> c;
    ll pb, ps, pc;
    cin >> pb >> ps >> pc;
    ll r;
    cin >> r;

    ll rb = 0, rs = 0, rc = 0;
    for (char ch : recipe)
    {
        if (ch == 'B')
            rb++;
        else if (ch == 'S')
            rs++;
        else
            rc++;
    }

    ll priceOfOne = rb * pb + rs * ps + rc * pc;

    vector<ll> priceV;
    ll cumPrice = 0;

    while (true)
    {
        ll price = priceOfOne;

        if (b >= rb){
            price -= rb * pb;
            b -= rb;
        }
        else{
            price -= b * pb;
            b = 0;
        }

        if (s >= rs){
            price -= rs * ps;
            s -= rs;
        }
        else{
            price -= s * ps;
            s = 0;
        }

        if (c >= rc){
            price -= rc * pc;
            c -= rc;
        }
        else{
            price -= c * pc;
            c = 0;
        }

        cumPrice += price;
        priceV.push_back(cumPrice);

        if (price == priceOfOne)
            break;
    }

    if (r >= priceV.back())
    {
        ll extra = (r - priceV.back()) / priceOfOne;
        cout << priceV.size() + extra << "\n";
        return 0;
    }

    ll ans = binSer(r, priceV);
    if (ans == -1)
        cout << 0 << "\n";
    else
        cout << ans + 1 << "\n";

    return 0;
}
