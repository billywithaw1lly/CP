#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        string str;
        cin>>str;

        int count = 0;
        int c = 0;
        for(int i = 0; i < n; i++){

            if(str[i]=='.')
                count++;
            
            if(str[i]=='#' || i == n-1)
            {
                if(count == 2){
                    c = c + 2;
                    count = 0;
                }
                else if(count == 1){
                    c = c + 1;
                    count = 0;
                }
                else if( count >= 3  ){
                    c = 2;
                    break;
                }
            }
            
        }
        cout << c <<"\n";
    }
    return 0;
}