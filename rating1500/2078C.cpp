#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define fastread                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);

using vi = vector<int>;
using vvi = vector<vector<int>>;
using vii = vector<pair<int, int>>;
using vll = vector<pair<ll, ll>>;

const int MOD = 1000000;
const int N = 2e5 + 1;

int T;

void solve(){
    // int n; cin >> n;
    // vi arr(2*n);
    // for(auto &it : arr)
    //     cin >> it;
    
    // int ans = 0;

    // sort(arr.rbegin(), arr.rend());

    // vii freq;

    // for (int i = 0; i < arr.size();){
    //     int x = arr[i];
    //     int count = 0;
    //     while (i < arr.size() && arr[i] == x){
    //         count++;
    //         i++;
    //     }
    //     freq.push_back({count, x});
    // }
    // sort(freq.rbegin(), freq.rend());

    // vi ansarr;
    // int l = 0, r = freq.size() - 1;
    // while(l <= r){

    //     while (l <= r && freq[l].first == 0) l++;
    //     while (l <= r && freq[r].first == 0) r--;

    //     if (l > r) break;

    //     ans += freq[l].second;
    //     ansarr.push_back(freq[l].second);
    //     freq[l].first--;

    //     if (l > r) break;
        
    //     ans -= freq[r].second;
    //     ansarr.push_back(freq[r].second);
    //     freq[r].first--;
    // }

    // int ini = arr[0];
    // ans += ini;
    // int ex = 1;
    // ansarr.push_back(ini);
    // for(int i = 1; i < 2 * n; i++){
    //     while(true){
    //         if(arr[i] == ini){
    //             int temp = arr[i];
    //             arr[i] = arr[i + ex];
    //             arr[i + ex] = temp;
    //             ex++;
    //         } else {
    //             if(i % 2 != 0) ans -= arr[i];
    //             else ans += arr[i];
    //             ex = 1;

    //             ansarr.push_back(arr[i]);
    //             break;
    //         }
    //     }
    // }

    int n;
    cin >> n;

    vi b(2 * n);
    for (int &x : b)
        cin >> x;
    sort(b.begin(), b.end());

    vector<ll> a(2 * n + 1, 0);
    for (int i = 0; i <= n; i++){
        a[2 * i] = b[n + i - 1];
    }

    for (int i = 0; i < n - 1; i++){
        a[2 * i + 1] = b[i];
    }
    ll sum_big = 0, sum_small = 0;

    for (int i = n - 1; i < 2 * n; i++)
        sum_big += b[i];

    for (int i = 0; i < n - 1; i++)
        sum_small += b[i];

    a[2 * n - 1] = sum_big - sum_small;

    for (int i = 0; i < 2 * n + 1; i++)
        cout << a[i] << " ";
    cout << "\n";

    return;
}

int main()
{
    fastread;
    int t;
    cin >> t;

    for (T = 1; T <= t; T++)
        solve();

    return 0;
}