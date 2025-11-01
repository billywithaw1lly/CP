#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr)

int m; 
string s;
vector <int> avaliable;
vector <int> ans;
bool found = false;

void dfs(int step, int last, int balance){

    if(found)
    return;

    if(step > m){
        found = true;
        cout<<"YES\n";
        for(int x : ans)
            cout<< x <<" ";
        cout<<"\n";
        return;
    }

    for(int w : avaliable){
        if(w == last) continue;
        int new_balance = (step % 2 ? balance + w : balance - w);
        if(new_balance == 0) continue;
        if(balance > 0 && new_balance > 0  || balance < 0 && new_balance < 0) continue;
        if(abs(new_balance) > 10) continue;
        ans.push_back(w);
        dfs(step + 1, w, new_balance);
        if(found) return;
        ans.pop_back();
    }
}

int main(){
    fastio;
    cin >> s >> m;
    for(int i = 0; i < 10; i++)
        if(s[i] == '1') avaliable.push_back(i + 1);

    dfs(1, 0, 0);

    if(!found)
        cout << "NO\n";
    return 0;
}
