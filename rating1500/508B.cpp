#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define fastread                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);

int binSearch(vector<ll> &pmax, int n, int val)
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

int main()
{
    fastread;
    int n, d;
    cin >> n >> d;

    vector<pair<int, int>> p(n);

    for(int i = 0; i < n; i++){
        int x; cin>>x;
        p[i].second = x;
        int y; cin>>y;
        p[i].first = y;
    }

    sort(p.rbegin(), p.rend());
    
    return 0;
}
