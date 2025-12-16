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
    int n; cin >> n;
    vi a(n);

    for(auto &it : a) cin >> it;

    bool odd = false;
    bool even = false;
    set<int> ten;
    set<int> five;
    int count = 0;

    for(int i = 0; i < n; i++){
        int temp = a[i] % 100;
        //
        //cout << temp << " temp" << nl;
        int res = a[i] % 10;
        //
        //cout << res << "res" << nl;
        temp /= 10;
        //
        //cout << temp << " temp" << nl;
        if(odd && even){
            cout << "NO" << nl;
            return;
        }

        if(temp % 2 == 0 && (res != 5 && res != 0))
        {
            //cout << "5 & 10 even " << nl;
            if(res == 1 || res == 2 || res == 4 || res == 8)
            even = true;
            else
            odd = true;
        }
        else if (temp % 2 == 1 && (res != 5 && res != 0))
        {
            //cout << "5 & 10 odd" << nl;
            if(res == 1 || res == 2 || res == 4 || res == 8)
            odd = true;
            else
            even = true;
        }
        else{
            //cout << "5 & 10 " << nl;
            count++;
            if(res == 5) five.insert(a[i]);
            else ten.insert(a[i]);
        }
    }
    if(odd && even && count == 0)
    {
        cout << "NO" << nl;
    }
    else
    {
        if(count == n)
        {
            if (five.size() > 1)
            {
                cout << "NO" << nl;
            }
            else if (ten.size() > 1)
            {
                cout << "NO" << nl;
            }
            else if (five.size() == 0 && ten.size() == 1)
            {
                cout << "YES" << nl;
            }
            else if (five.size() == 1 && ten.size() == 0)
            {
                cout << "YES" << nl;
            }
            else
            {
                int fiveE = *five.begin();
                int tenE = *ten.begin();
                if(fiveE + 5 == tenE){
                    cout << "YES" << nl;
                } else {
                    cout << "NO" << nl;
                }
            }
        }
        else if( count == 0)
        {
            cout << "YES" << nl;
            return;
        }
        else{
            cout << "NO" << nl;
        }
    }
    return;
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