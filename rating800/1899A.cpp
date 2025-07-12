#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--){
        int n;
        cin>>n;

        if( n == 1 || n == 2 || n % 3 == 1 || n % 3 == 2)
        cout<<"First"<<"\n";
        else
        cout<<"Second"<<"\n";
    }
    return 0;
}