#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t; cin>>t;
    while(t--){
        int n;
        cin>>n;

        int arr[n];
        for(int i = 0; i < n; i++)
        cin>>arr[i];

        vector <int> vec(1);
        int count = 0;
        int pro = arr[0];
        // vec.push_back(pro);
        for(int i = 1; i < n ;i++ ){
            int a = arr[i];
            if(( a%2 == 0 && pro%2==0)||( a%2 != 0 && pro%2!=0)){
                pro = a * pro; 
                count++;
            }
            else if(i == n-1){
                if(( arr[n-1]%2 == 0 && pro%2==0)||( arr[n-1]%2 != 0 && pro%2!=0))
                vec.push_back(pro*arr[n-1]);
                else{
                    vec.push_back(pro);
                    vec.push_back(arr[n-1]);
                }
            }
            else{
                vec.push_back(pro);
                pro = a;
            }
        }
        cout<<count<<"\n";
    }
    return 0;
}