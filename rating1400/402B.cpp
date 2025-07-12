#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);


int main()
{
    fastio;

    int n, k;
    cin>>n>>k;
    int lowest = 1e9;
    int valueFirst = 0;
    int count = 0;

    vector<int> v(n);
    for(int i = 0; i < n; i++) cin>>v[i];

    for(int i = 1; i <= 1000; i++){
        for(int j = 0; j < n; j++){
            int expected = i + k * j;
            if(expected != v[j]) count++;
        }
        if(count < lowest){
            lowest = count;
            valueFirst = i;
        }
        count = 0;
    }

    cout<<lowest<<endl;
    for(int i = 0; i < n; i++){
        int expected = valueFirst + k * i;
        int diff = expected - v[i];

        if(diff > 0){
            cout<<"+ "<<i+1<<" "<<diff<<endl;
        }
        else if(diff < 0)
        cout<<"- "<<i+1<<" "<<-diff<<endl;
    }
    return 0;

}
