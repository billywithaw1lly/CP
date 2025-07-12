#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n, m; cin>>n>>m;
    char arr[n][m];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin>>arr[i][j];
        }
    }

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if( (i + j) % 2 == 0 && arr[i][j] == '.'){
                    arr[i][j] = 'B';
                }
                else if( (i + j) % 2 != 0 && arr[i][j] == '.'){
                    arr[i][j] = 'W';
                }
            }
        }

        for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }


    return 0;
}
