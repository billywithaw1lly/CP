#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main(){
    string s;
    cin>>s;

    ll n = s.size();

    map<char, int> mp;

    for(int i = 0; i < n ; i++){
        mp[s[i]]++;
    }
    // for(auto [ch, freq] : mp){
    //     cout << ch << " => " << freq << endl;
    // }

    ll count = 0;

    for(auto [ch, freq] : mp){
        count += freq % 2;
    }

    if(count % 2 != 0 || count == 0)
    cout<<"First"<<endl;
    else
    cout<<"Second"<<endl;

    return 0;
}