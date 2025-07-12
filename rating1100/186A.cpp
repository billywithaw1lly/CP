#include <bits/stdc++.h>
using namespace std;

int main(){
    string s1, s2;
    cin>>s1>>s2;

    int l1 = s1.size();
    int l2 = s2.size();

    set <int> ss1;
    set <int> ss2;

    bool same = true;

    for(int i = 0; i < l1; i++){
        ss1.insert(s1[i]);
    }
    for(int i = 0; i < l2; i++){
        ss2.insert(s2[i]);
    }

    int count = 0;
    if(l1 != l2){
        cout<<"NO\n";
        return 0;
    }
    else{
        if(ss1 != ss2){
            cout<<"NO\n";
            return 0;
        }
        for(int i = 0; i < l1; i++){
            if(s1[i] != s2[i])
            count++;
        }
    }

    if(count == 2)
    cout<<"YES\n";
    else
    cout<<"NO\n";

    return 0;
}