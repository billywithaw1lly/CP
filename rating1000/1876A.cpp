// attempt 1 --> tle
// #include <bits/stdc++.h>

// typedef long long ll;
// using namespace std;

// void solve(){
//     ll n, p;
//     cin>>n>>p;

//     ll tp = 0; //total Population
//     vector<ll> arr1(n);
//     vector<ll> arr2(n);

//     for(ll i = 0; i < n; i++){
//         cin>>arr1[i];
//         tp += arr1[i];
//     }

//     for(ll i = 0; i < n; i++)
//     cin>>arr2[i];

//     //sorting 
//     //this program is going to be totally shit

//     for(ll i = 0; i < n - 1; i++)
//         for(ll j = i + 1; j < n; j++){
//             if(arr2[j] < arr2[i]){
//                 // for array 2
//                 ll temp2 = arr2[j];
//                 arr2[j] = arr2[i];
//                 arr2[i] = temp2;
                
//                 // for array 1
//                 ll temp1 = arr1[j];
//                 arr1[j] = arr1[i];
//                 arr1[i] = temp1;
//             }
//         }
//         //checking for sort

//         // for(ll i = 0; i < n; i++)
//         // cout<<arr1[i]<<" ";
//         // cout<<endl;

//         // for(ll i = 0; i < n; i++)
//         // cout<<arr2[i]<<" ";
//         // cout<<endl;

//         ll sum = p;
//         ll clone = n - 1;
//         // cout<<"sum ->"<<sum<<endl;
//         // cout<<"clone ->"<<clone<<endl;
//         int i = 0;
//         while(true){

//             if(clone <= 0)
//             break;
//             // cout<<"clone inside ->"<< clone <<endl;
//             // cout<<"starting with member number ->"<< i + 1<<endl;
//             if(i < n){
//                 while(arr1[i]--){
//                     if(arr2[i] < p){
//                         sum = sum + arr2[i];
//                         clone--;
//                     }
//                     else{
//                         sum = sum + p;
//                         clone--;
//                     }
//                     // cout<<"sum inside ->"<<sum<<endl;
//                     // cout<<"clone insdie (inside) ->"<<clone<<endl;
//                     if(clone <= 0)
//                     break;
//                 }
//                 i++;
//                 // cout<<"ending with member number "<<i<<endl;
//             }
//         }
//         cout<<sum<<endl;
// }

// int main(){
//     ios::sync_with_stdio(0);
//     cin.tie(0);

//     ll t; cin>>t;
//     while(t--){
//         solve();
//     }
//     return 0;
// }


#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

void solve() {
    ll n, p;
    cin >> n >> p;

    ll totalPopulation = 0;
    vector<pair<ll, ll>> arr; // {arr2[i], arr1[i]}

    for (ll i = 0; i < n; i++) {
        ll population;
        cin >> population;
        totalPopulation += population;
        arr.push_back({0, population});
    }

    for (ll i = 0; i < n; i++) {
        cin >> arr[i].first; // arr2
    }

    // Sort by cost (arr2) its kinda shit doing arr.begin.first() or maybe i could have wrote arr.first(), arr.first() + n maybe/// nvm at this point i am typing horse shit 
    sort(arr.begin(), arr.end());

    ll sum = p;
    ll remaining = n - 1;

    for (ll i = 0; i < n && remaining > 0; i++) {
        ll take = min(arr[i].second, remaining); 
        sum += take * min(arr[i].first, p); 
        remaining -= take;
    }

    cout << sum << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}