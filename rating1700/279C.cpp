#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr)

int main()
{
    fastio;

    int n, m;
    cin >> n >> m;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    // vector <int> arr(n);
    // for(auto &it : arr)
    //     cin>>it;
    
    // while(m--){

    //     int l, r;
    //     cin >> l >> r;
    //     if(l == r){
    //         cout << "Yes\n";
    //         continue;
    //     }
    //     bool possible = true;
    //     bool change = false;
    //     bool inc = false;
    //     bool dec = false;
    //     bool eq = false;
    //     bool firstChange = false;
    //     bool secondChange = false;

    //     if (arr[l] > arr[l - 1])
    //         inc = true;
    //     else if (arr[l] < arr[l - 1])
    //         dec = true;
    //     else if (arr[l] = arr[l - 1])
    //         eq = true;

    //     for(int i = l; i < r - 1; i++){

    //         if(inc){

    //             if(arr[i + 1] < arr[i]){

    //                 if(firstChange == true){
    //                     secondChange = true;
    //                     cout<<"No\n";
    //                     break;
    //                 } else {
    //                     firstChange = true;
    //                     inc = false;
    //                     dec = true;
    //                 }

    //             } else if (arr[i + 1] == arr[i]) {
    //                 eq = true;
    //                 inc = false;
    //             }

    //         }  else if (dec){

    //             if (arr[i + 1] > arr[i]){
    //                 secondChange = true;
    //                 cout<<"No\n";
    //                 break;
    //             } else if (arr[i + 1] == arr[i]) {
    //                 eq = true;
    //                 dec = false;
    //             }
    //         } else {
    //             if(arr[i + 1] > arr[i]){
    //                 if (firstChange) {
    //                     secondChange = true;
    //                     cout << "No\n";
    //                     break;
    //                 } else {
    //                     inc = true, eq = false;
    //                 }
    //             } 
    //             else if(arr[i + 1] < arr[i]){
    //                 if (firstChange){
    //                     secondChange = true;
    //                     cout << "No\n";
    //                     break;
    //                 } else {
    //                     dec = true, eq = false;
    //                 }
    //             }
    //         }
    //     }
    //     if(!secondChange)
    //     cout << "Yes\n";
    // }



    //battling tle with local minima

    // set<int> st;
    // for (int i = 1; i < n - 1; i++) {
    //     if (arr[i] < arr[i - 1] && arr[i] < arr[i + 1])
    //         st.insert(i + 1);
    // }

    // fails some test case 19 idk what
    // while (m--)
    // {
    //     int l, r;
    //     cin >> l >> r;

    //     if (l == r)
    //     {
    //         cout << "Yes\n";
    //         continue;
    //     }
    //     auto it = st.lower_bound(l + 1);

    //     if (it != st.end() && *it < r)
    //         cout << "No\n";
    //     else
    //         cout << "Yes\n";
    // }

    // return 0;

    vector<int> inc(n + 1), dec(n + 1);

    inc[n] = n;
    for (int i = n - 1; i >= 1; i--)
    {
        if (a[i] <= a[i + 1])
            inc[i] = inc[i + 1];
        else
            inc[i] = i;
    }

    dec[n] = n;
    for (int i = n - 1; i >= 1; i--)
    {
        if (a[i] >= a[i + 1])
            dec[i] = dec[i + 1];
        else
            dec[i] = i;
    }

    while (m--)
    {
        int l, r;
        cin >> l >> r;

        int mid = inc[l];
        if (dec[mid] >= r)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;

}
