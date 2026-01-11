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

int findNext(const string &s, int start_index, char target)
{
    for (int i = start_index; i < s.size(); i++)
    {
        if (s[i] == target)
            return i;
    }
    return -1;
}

bool generateWorstSequence(int n, int k, const string &s, string &current, int current_s_idx)
{
    if ((int)current.size() == n)
    {
        return false;
    }
    int max_next_idx = -1;
    char worst_char = ' ';

    for (int i = 0; i < k; i++)
    {
        char c = 'a' + i;
        int next_idx = findNext(s, current_s_idx, c);
        if (next_idx == -1)
        {
            cout << "NO" << nl;
            string ans = current + c;
            while ((int)ans.size() < n)
                ans += 'a';
            cout << ans << nl;
            return true;
        }
        if (next_idx > max_next_idx)
        {
            max_next_idx = next_idx;
            worst_char = c;
        }
    }
    current.push_back(worst_char);
    if (generateWorstSequence(n, k, s, current, max_next_idx + 1))
    {
        return true;
    }

    return false;
}

void solve()
{
    // need to know all possible subsequences
    // it will be k ^ n || pow(k, n)
    // initial plan to generate all the sub sequences store them and match with the sequence m if it is not present cout which one

    int n, k, m;
    cin >> n >> k >> m;
    string s;
    cin >> s;

    string current = "";
    if (generateWorstSequence(n, k, s, current, 0))
    {
        return;
    }

    cout << "YES" << nl;
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