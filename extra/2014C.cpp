#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;

    // vector <pair <char, int>> arr(n);

    // int count = 0;
    // int countA = 0;
    // for(int i = 0; i < n; i++){
    //     cin>>arr[i].first;
    //     arr[i].second = i + 1;
    //     if( arr[i].first == 'B')
    //     count++;
    // }

    int countA = 0;
    vector <int> posA;
    vector <int> posB;

    string str; cin>>str;

    for(int i = 0; i < n; i++){
        if(str[i] == 'A') posA.push_back(i+1);
        else posB.push_back(i+1);
    }

    // for(int i = 0; i < n; i++){
    //     cout<<arr[i].first<<" "<<arr[i].second<<endl;
    // }

    // for(int i = 0; i < n; i++){

    //     if(arr[i].first == 'A'){
    //         for(int j = 0; j < n; j++){

    //             if(arr[j].first == 'B')
    //             {
    //                 cout<<"value of first "<<arr[i].second<<" value of second "<<arr[j].second<<endl;

    //                 if((arr[i].second == 1 && arr[j].second == n ) || ( (arr[i].second > arr[j].second) && (arr[i].second != n && arr[j].second != 1) ) )
    //                     countA++;
    //             }
                
    //             if(countA == count){
    //                 cout<<"Alice"<<endl;
    //                 return;
    //             }
    //         }
            
    //     }
    // }
    // cout<<"Bob"<<endl;
    //         return;

    int lenA = posA.size();
    int lenB = posB.size();

    for(int i = 0; i < lenA; i++){

        for(int j = 0; j < lenB; j++){
            //cout<<" posa "<<posA[i]<<" posb "<<posB[j]<<endl;

            if((posA[i] > posB[j] && ((posB[j] != 1) || posA[i] != n)) || posA[i] == 1 && posB[j] == n){
                //if(posB[j] == n)
                countA++;
            }
            // else{
            //     cout<<" posa "<<posA[i]<<" posb "<<posB[j]<<endl;
            //     if(posB[j] > posA[i] && posA[i] != 1)
            //     countA++;
            // }
        }
        if(countA == lenB){
            cout<<"Alice"<<endl;
            return;
        }
        else
        countA = 0;
    }
    cout<<"Bob"<<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}