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

vi storageArray(8005, 0);

bool checkSpecial(int target, const vi &queryArray)
{
    int current_sum = 0;
    int left = 0;

    for (int right = 0; right < queryArray.size(); right++)
    {

        current_sum += queryArray[right];

        while (current_sum > target && left < right)
        {
            current_sum -= queryArray[left];
            left++;                     
        }

        if (current_sum == target && (right - left >= 1))
        {
            return true;
        }
    }
    return false;
}

void solve()
{
    int count = 0;
    int n;
    cin >> n;
    storageArray.assign(8005, 0); 

    vi queryArray(n);
    for (auto &it : queryArray)
    {
        cin >> it;
    }

    for (int i = 0; i < n; i++)
    {
        int target = queryArray[i];

        if (storageArray[target] == 1)
        {
            count++;
        }
        else if (storageArray[target] == 0)
        {
            bool check = checkSpecial(target, queryArray);
            if (check)
            {
                storageArray[target] = 1;
                count++;
            }
            else
            {
                storageArray[target] = -1;
            }
        }
    }
    cout << count << nl;
}


int main()
{
    fastio;
    int t;
    cin >> t;
    //t = 1;
    for (T = 1; T <= t; T++)
    {
        solve();
    }

    return 0;
}