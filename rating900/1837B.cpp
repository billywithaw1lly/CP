#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin>>t;

    while(t--){
        int n; cin>>n;
        string str; cin>>str;

        int count = 1; int countMax = 1;

        for(int i = 1; i < n; i++){
            if (str[i-1] != str[i])
            count = 1;

            else{
                count++;
            }
            countMax = max(countMax, count);
        }
        cout<<countMax+1<<"\n";
    }
    return 0;
}