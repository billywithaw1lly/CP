#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t; cin>>t;

    int score[10][10] = {
        {1,1,1,1,1,1,1,1,1,1},
        {1,2,2,2,2,2,2,2,2,1},
        {1,2,3,3,3,3,3,3,2,1},
        {1,2,3,4,4,4,4,3,2,1},
        {1,2,3,4,5,5,4,3,2,1},
        {1,2,3,4,5,5,4,3,2,1},
        {1,2,3,4,4,4,4,3,2,1},
        {1,2,3,3,3,3,3,3,2,1},
        {1,2,2,2,2,2,2,2,2,1},
        {1,1,1,1,1,1,1,1,1,1}
    };

    while(t--){
        char arr[10][10];

        for(int i = 0; i < 10; i++)
            for(int j = 0; j < 10; j++)
            cin>>arr[i][j];
        int score1 = 0;
        for(int i = 0; i < 10; i++)
            for(int j = 0; j < 10; j++){
                if(arr[i][j]=='X'){
                    score1 = score1 + score[i][j];
                }
            }
            cout<<score1<<"\n";
    }
    return 0;
}