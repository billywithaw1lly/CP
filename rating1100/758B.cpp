#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    string s; cin>>s;

    int l = s.size();
    int a,b,c, d;

    for(int i = 0; i < l; i++){
        if(s[i] == 'R'){
            a = (i + 1) % 4;
        }
        if(s[i] == 'B'){
            b = (i + 1) % 4;
        }
        if(s[i] == 'Y'){
            c = (i + 1) % 4;
        }
        if(s[i] == 'G'){
            d = (i + 1) % 4;
        }
    }

    int R = 0, B = 0, Y = 0, G = 0; 
    for(int i = a - 1; i < l; i+=4){
        if(s[i] == '!')
        R++;
    }

    for(int i = b - 1; i < l; i+=4){
        if(s[i] == '!')
        B++;
    }

    for(int i = c - 1; i < l; i+=4){
        if(s[i] == '!')
        Y++;
    }
    for(int i = d - 1; i < l; i+=4){
        if(s[i] == '!')
        G++;
    }

    cout<<R<<" "<<B<<" "<<Y<<" "<<G<<endl;
    return 0;
}
