#include <bits/stdc++.h>
using namespace std;

long long mxn = 2e18;
long long md = 1e9+7;
vector<vector<pair<int,int>>>r;
vector<bool>used;
vector<long long>d;
string ans = "YES";

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long>a(n);
        vector<vector<int>>st(31);
        int q;
        cin>>q;
        for(int i = 0; i <n;i++){
            cin>>a[i];
            long long k = a[i];
            int cnt = 0;
            while(k%2==0){
                cnt++;
                k/=2;
            }
            st[cnt].push_back(i);
        }
        
        vector<long long>pw(31,1);
        for(int i = 1; i <31;i++){
            pw[i] = pw[i-1]*2;
        }
        for(int i = 0; i <q;i++){
            int x;
            cin>>x;
            for(int j = x;j<31;j++){
                for(auto i:st[j]){
                    a[i]+=pw[x-1];
                    st[x-1].push_back(i);
                }
                st[j] = {};
            }
        }
        for(auto i:a){
            cout<<i<<' ';
        }
        cout<<endl;
    }
}
