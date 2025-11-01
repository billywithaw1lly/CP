#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr)

// void solve()
// {
//     fastio;
//     int n, m;
//     cin>>n>>m;

//     vector<pair<int, int>> f(m);

//     for(int i = 0; i < m; i++){
//         cin>>f[i].first; cin>>f[i].second;
//     }
//     int count = 0;
//     int ans = 0;

//     sort(begin(f), end(f));

//     for(int i = 1; i <= n; i++){
//         for(int j = i; j<= n; j++){

//             for(int k = 0; k < m; k++){
//                 if( (i != f[k].first || j != f[k].second) && (i != f[k].first || j != f[k].second) )
//                  count++;
//                 else{
//                     break;
//                 }

//                 if(count == m){
//                     ans++;
//                 }
//             }
//             if(count != m){
//                 count = 0;
//                 break;
//             }
//             count = 0;
//         }
//     }
//     cout<<ans<<endl;
// }

void solve()
{
    fastio;
    int n, m;
    cin >> n >> m;

    vector<int> nearestEnemy(n + 1, 0);

    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        if (a > b)
            swap(a, b);                            
        nearestEnemy[b] = max(nearestEnemy[b], a);
    }

    vector<int> maxLeft(n + 1);

    maxLeft[1] = 1;

    long long ans = 1;

    for (int i = 2; i <= n; i++)
    {
        maxLeft[i] = max(maxLeft[i - 1], nearestEnemy[i] + 1);
        ans += i - maxLeft[i] + 1;
    }

    cout << ans << '\n';
}

//why this logic doesnt works!!!! 
// void solve(){
//     fastio;

//     int n,m;
//     cin>>n>>m;

//     long long ans = 0;
//     vector<pair<int,int>> f(m);
//     for(int i = 0; i < m; i++){
//         int a, b;
//         cin>>a>>b;

//         if(a > b) swap(a, b);

//         f[i].first = b;
//         f[i].second = a;
//     }

//     sort(begin(f), end(f));

//     int change = 1;
//     for (int i = 0; i < m; i++)
//     {
//         long long temp = f[i].first - change;
//         if (temp > 0)
//         {
//             ans += (temp * (temp + 1)) / 2;
//         }
//         change = f[i].second + 1;
//     }

//     long long temp = n + 1  - change;
//     ans += (temp * (temp + 1)) / 2;


//     cout << ans << endl;
//     return;
// }

int main()
{
    fastio;
    int t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}