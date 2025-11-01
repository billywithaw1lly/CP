#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr)

int main()
{
    fastio;
    ll n;
    cin >> n;
    ll count = n * 6;

    vector<pair<int, int>> co(n);
    for(auto &it : co){
        cin >> it.first;
        cin>> it.second;
    }

    sort(co.begin(), co.end(), [](auto &a, auto &b){ 
        return abs(a.first) + abs(a.second) < abs(b.first) + abs(b.second);
    });

    for(int i = 0; i < n; i++){
        if(co[i].first == 0 && co[i].second == 0) count -= 6;
        else if(co[i].first == 0 || co[i].second == 0) count -= 2;
    }

    cout<< count << "\n";
    for(int i = 0; i < n; i++){
        int x = co[i].first;
        int y = co[i].second;

        if(x > 0)
            cout << "1 " << abs(x) << " R\n";
        else if (x < 0)
            cout << "1 " << abs(x) << " L\n";

        if (y > 0)
            cout << "1 " << abs(y) << " U\n";
        else if (y < 0)
            cout << "1 " << abs(y) << " D\n";

        cout << "2\n";

        if (x > 0)
            cout<< "1 " << abs(x) << " L\n";
        else if (x < 0)
            cout<< "1 " << abs(x) << " R\n";

        if (y > 0)
            cout << "1 " << abs(y) << " D\n";
        else if (y < 0)
            cout << "1 " << abs(y) << " U\n";

        cout << "3\n";
    }

    return 0;
}
