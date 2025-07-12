#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define fastread                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);


void solve(){
    int n; cin>>n;
    vector<int> v(3, 0);

    if( n % 2 == 0){
        v[0] = 2;
        n = n / 2;
        if( n % 2 == 0){
            v[1] = 2;
            v[2] = n / 2;
        }
        else{
            for(int i = 3; i < n; i++){
                if(n % i == 0){
                    v[1] = i;
                    v[2] = n / i;
                }
            }
        }
    }
    else{

        for(int i = 3; i < n; i++){

            if(n % i == 0){
                if(v[0] == 0){
                    v[0] = i;
                    n = n / i;
                    continue;
                }
                if (v[1] == 0)
                {
                    v[1] = i;
                    n = n / i;
                    continue;
                }
                if (v[2] == 0)
                {
                    v[2] = i;
                    n = n / i;
                }
            }
        }
    }
    if(v[0] == 0 || v[1] == 0 || v[2] == 0)
    cout<<"NO\n";
    else{
        cout<<"YES\n";
        cout<<v[0]<<" "<<v[1]<<" "<<v[2]<<endl;
    }
    return;
}

int main()
{
    fastread;
    int t; cin>>t;

    while(t--)
    solve();

    return 0;

}
