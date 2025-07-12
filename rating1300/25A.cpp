#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define fastread                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);

int main(){
    int n; cin>>n;
    vector<ll> v(n);

    for(int i = 0; i < n; i++) cin>>v[i];

    if (((v[0] % 2) != (v[1] % 2)) || ((v[n-1] % 2) != (v[n-2] % 2))){

        if (((v[0] % 2) != (v[1] % 2)) && ((v[0] % 2) != (v[n - 1] % 2))){
            cout<<1<<endl;
            return 0;
        }
        else if (((v[0] % 2) != (v[n - 1] % 2)) && ((v[n - 1] % 2) != (v[n - 2] % 2))){
            cout<<n<<endl;
            return 0;
        }
    }

    for (int i = 1; i < n - 1; i++){
        if (((v[i] % 2) != (v[i - 1] % 2)) && ((v[i] % 2) != (v[i + 1] % 2))){
            cout<<i+1<<endl;
            return 0;
        }
    }
}

// int main()
// {
//     fastread;
//     int t; cin>>t;

//     while(t--){
//         solve();
//     }

//     return 0;
// }
