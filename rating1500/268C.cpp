#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr)

int main()
{
    fastio;
    int n,m; cin>>n>>m;
        int temp = min(m, n);

        cout<<temp + 1<<endl;
        for(int i = 0; i <= temp; i++){
            cout<<i<<" "<<temp - i<<endl;
        }

    return 0;
}