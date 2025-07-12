#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll n; cin>>n;
    
    int arr[n][2];

    ll found = 0;
    ll uh = 0, lh = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 2; j++){
            cin>>arr[i][j];
            if(j == 0 && (arr[i][j] % 2 != 0))
            uh++;
            else if (j == 1 && (arr[i][j] % 2 != 0))
            lh++;
        }
        if(arr[i][0] % 2 != 0 && arr[i][1] % 2 != 0)
        found++;
    }
    // answers
    if(lh % 2 == 0 && uh % 2 == 0){
        cout<<0<<endl;
    }
    else if((lh % 2 != 0 && uh % 2 == 0) || (lh % 2 == 0 && uh % 2 != 0))
    cout<<-1<<endl;

    else if(found == uh && found == lh)
    cout<<-1<<endl;

    else if(found < max(uh, lh))
    cout<<1<<endl;

    else if(lh % 2 != 0 && uh % 2 != 0)
    cout<<1<<endl;

    return 0;
}