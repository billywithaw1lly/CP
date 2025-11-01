#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr)

// void solve(){
//     int a,b,k;
//     cin>>a>>b>>k;

//     vector<pair<int, int>> pairB(k);
//     vector<pair<int, int>> pairG(k);
//     set<pair<int, int>>st;

//     for(int i = 0; i < k; i++){
//         cin >> pairB[i].first;
//         pairB[i].second = i + 1;
//     }

//     for (int i = 0; i < k; i++){
//         cin >> pairG[i].first;
//         pairG[i].second = i + 1;
//     }

//     //bruteforce never works
//     // for(int i = 0; i < k; i++){
//     //     for(int j = i + 1; j < k; j++){
//     //         if(pairs[i].first != pairs[j].first && pairs[i].second != pairs[j].second) ans++;
//     //     }
//     // }

//     int ans = (k * (k - 1)) / 2;

//     sort(begin(pairB), end(pairB));

//     int start = pairB[0].second;
//     for (int i = 1; i < k; i++)
//     {
//         if (pairB[i].first != pairB[i - 1].first)
//         {
//             int end = pairB[i - 1].second;
//             if (start != end)
//             {
//                 st.insert({start, end});
//                 ans -= ((end - start + 1) * (end - start)) / 2;
//             }
//             start = pairB[i].second;
//         }
//     }

//     if (start != pairB[k - 1].second)
//     {
//         st.insert({start, pairB[k - 1].second});
//         ans -= ((pairB[k - 1].second - start + 1) * (pairB[k - 1].second - start )) / 2;
//     }

//     sort(begin(pairG), end(pairG));
//     start = pairG[0].second;

//     for (int i = 1; i < k; i++)
//     {
//         if (pairG[i].first != pairG[i - 1].first)
//         {
//             int end = pairG[i - 1].second;
//             if (start != end)
//             {
//                 pair<int, int> rng = {start, end};
//                 if (st.find(rng) == st.end())
//                 {
//                     int len = end - start + 1;
//                     ans -= (len * (len - 1)) / 2;
//                 }
//             }
//             start = pairG[i].second;
//         }
//     }

//     if (start != pairG[k - 1].second)
//     {
//         pair<int, int> rng = {start, pairG[k - 1].second};
//         if (st.find(rng) == st.end())
//         {
//             int len = pairG[k - 1].second - start + 1;
//             ans -= (len * (len - 1)) / 2;
//         }
//     }

//     //testing
//     cout<<ans<<endl;

//     for (auto &p : st)
//     {
//         cout << p.first << " " << p.second << "\n";
//     }

//     return;
// }

// void solve()
// {
//     int a, b, k;
//     cin >> a >> b >> k;

//     vector<int> boys(k), girls(k);
//     for (int i = 0; i < k; i++)
//         cin >> boys[i];
//     for (int i = 0; i < k; i++)
//         cin >> girls[i];


//     vector<ll> freqBoy(a + 1, 0), freqGirl(b + 1, 0);
//     map<pair<int, int>, ll> freqPair;

//     for (int i = 0; i < k; i++)
//     {
//         freqBoy[boys[i]]++;
//         freqGirl[girls[i]]++;
//         freqPair[{boys[i], girls[i]}]++;
//     }

//     ll total = 1LL * k * (k - 1) / 2;
//     ll badByBoy = 0, badByGirl = 0, overlap = 0;

//     // count bads
//     for (int i = 1; i <= a; i++)
//         badByBoy += freqBoy[i] * (freqBoy[i] - 1) / 2;

//     for (int i = 1; i <= b; i++)
//         badByGirl += freqGirl[i] * (freqGirl[i] - 1) / 2;

//     for (auto &p : freqPair)
//         overlap += p.second * (p.second - 1) / 2;

//     ll ans = total - badByBoy - badByGirl + overlap;
//     cout << ans << "\n";
// }

void solve()
{
    int a, b, k;
    cin >> a >> b >> k;
    vector<int> boys(k), girls(k);

    for (int i = 0; i < k; i++)
        cin >> boys[i];
    for (int i = 0; i < k; i++)
        cin >> girls[i];

    vector<ll> freqBoy(a + 1, 0), freqGirl(b + 1, 0);
    map<pair<int, int>, ll> freqPair;

    for (int i = 0; i < k; i++)
    {
        freqBoy[boys[i]]++;
        freqGirl[girls[i]]++;
        freqPair[{boys[i], girls[i]}]++;
    }

    ll total = 1LL * k * (k - 1) / 2;
    ll badBoy = 0, badGirl = 0, overlap = 0;

    for (int i = 1; i <= a; i++)
        badBoy += freqBoy[i] * (freqBoy[i] - 1) / 2;
    for (int i = 1; i <= b; i++)
        badGirl += freqGirl[i] * (freqGirl[i] - 1) / 2;
    for (auto &p : freqPair)
        overlap += p.second * (p.second - 1) / 2;

    ll ans = total - badBoy - badGirl + overlap;
    cout << ans << "\n";
}

int main(){

    fastio;
    int t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}