#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> VI;
#define PB push_back

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        VI vec(n);

        for (int i = 0; i < n; i++) {
            cin >> vec[i];
        }

        ll minNum = 1e9;

        if(is_sorted(vec.begin(), vec.end())){
            for(int i = 0; i < n-1; i++){
                minNum = min(minNum, (ll)(vec[i + 1] - vec[i]));
            }
            if (minNum == 0)
            cout<<"1\n";
            else if(minNum == 2)
            cout<<"2\n";
            else if(minNum % 2 == 0 && minNum != 0 && minNum != 2)
            cout<<(minNum/2)+1<<"\n";
            else if(minNum % 2 != 0 && minNum != 0 && minNum != 2)
            cout<<(minNum/2)+1<<"\n";
        }
        else
        cout<<"0\n";
    }
    return 0;
}