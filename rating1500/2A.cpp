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
#define pb push_back
int T;
// the failing attempt
// may the kermit bless me
void solve()
{
    int n;
    cin >> n;

    vector<pair<string, int>> rounds(n);
    unordered_map<string, int> finalScore;

    for (int i = 0; i < n; i++)
    {
        cin >> rounds[i].first >> rounds[i].second;
        finalScore[rounds[i].first] += rounds[i].second;
    }

    int maxScore = INT_MIN;
    for (auto &p : finalScore)
    {
        maxScore = max(maxScore, p.second);
    }
    
    unordered_map<string, int> runningScore;
    for (auto &r : rounds)
    {
        runningScore[r.first] += r.second;

        if (runningScore[r.first] >= maxScore &&
            finalScore[r.first] == maxScore)
        {
            cout << r.first << "\n";
            break;
        }
    }
    return;
}

int main()
{
    fastio;
    int t = 1;
    // cin >> t;

    for (T = 1; T <= t; T++)
    {
        solve();
    }

    return 0;
}