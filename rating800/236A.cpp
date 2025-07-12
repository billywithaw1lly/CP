#include <bits/stdc++.h>
using namespace std;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string str;
    cin>>str;

    int len = str.size();

    set<int> s;

    for(int i = 0; i < len; i++){
        s.insert(str[i]);
    }

    if(s.size() % 2 == 0)
    cout<<"CHAT WITH HER!"<<endl;
    else
    cout<<"IGNORE HIM!"<<endl;
    return 0;
}