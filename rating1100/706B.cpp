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
    int n;
    cin >> n;

    vector<ll> nv(n);
    for (int i = 0; i < n; i++)
        cin >> nv[i];

    sort(nv.begin(), nv.end());


    int q; cin>>q;
    while(q--){
        int qq; cin>>qq;

        int ans = binSearch(nv, n, qq);
        if(ans == -1)
        cout<<0<<endl;
        else
        cout<<ans + 1<<endl;
    }
    return 0;
}
