#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr)

#define nl "\n"
using vi = vector<int>;
using vll = vector<long long>;
using vvi = vector<vector<int>>;
using vpii = vector<pair<int, int>>;
using vpll = vector<pair<ll, ll>>;
using vc = vector<char>;
using vs = vector<string>;
#define pb push_back

int T;
// the failing attempt
// may the kermit bless me

const int N = 100005;
const int INF = 1e9;

struct point
{
    int x, y;
    char ch;

    void print()
    {
        for (int i = 0; i < this->y; i++)
        {
            for (int j = 0; j < this->x; j++)
                cout << this->ch;
            cout << nl;
        }
    }
};

void solve()
{
    point a, b, c;

    cin >> a.x >> a.y >> b.x >> b.y >> c.x >> c.y;
    a.ch = 'A';
    b.ch = 'B';
    c.ch = 'C';

    if (a.x < a.y)
        swap(a.x, a.y);
    if (b.x < b.y)
        swap(b.x, b.y);
    if (c.x < c.y)
        swap(c.x, c.y);

    if (a.x == b.x && a.x == c.x)
    {
        if (a.y + b.y + c.y == a.x)
        {
            cout << a.x << nl;

            a.print();
            b.print();
            c.print();
        }
        else
        {
            cout << "-1" << nl;
        }
        return;
    }

    if (c.x > b.x)
        swap(b, c);
    if (b.x > a.x)
        swap(a, b);

    int remaining_y = a.x - a.y;
    if (b.x == remaining_y)
        swap(b.x, b.y);
    if (c.x == remaining_y)
        swap(c.x, c.y);

    if (b.x + c.x == a.x && c.y == remaining_y && b.y == remaining_y)
    {
        cout << a.x << nl;
        a.print();

        for (int i = 0; i < b.y; i++)
        {
            for (int j = 0; j < b.x; j++)
                cout << b.ch;
            for (int j = 0; j < c.x; j++)
                cout << c.ch;
            cout << nl;
        }
        return;
    }

    cout << "-1" << nl;
}

int main()
{
    fastio;
    int t;
    //cin >> t;
    t = 1;
    for (T = 1; T <= t; T++)
    {
        solve();
    }

    return 0;
}