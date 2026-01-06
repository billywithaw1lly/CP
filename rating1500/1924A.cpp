#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr)
#define nl "\n"
using vi = vector<int>;
using vll = vector<long long>;
using vvi = vector<vector<int>>;
using vpii = vector<pair<int, int>>;
using vpll = vector<pair<ll, ll>>;
using vc = vector<char>;
using vs = vector<string>;
#define pb push_back
int T;
// the failing attempt
// may the kermit bless me

bool exist(string subs, const string &s){
    int n = subs.size();
    int inisub = 0;

    for(int i = 0; i < s.size(); i++){
        if(s[i] == subs[inisub]){
            inisub++;
            if(inisub == n){
                return true;
            }
        }
    }
    return false;
}

bool generate(const vc &chars, string &current, int n, string &s)
{
    if((int)current.size() == n){
        if(!exist(current, s)){
            cout << "NO" << nl;
            cout << current << nl;
            return true;
        }
        return false;
    }
    
    for(char c : chars){
        current.pb(c);
        if(generate(chars, current, n, s)) return true;
        current.pop_back();
    }
    return false;
}

void solve()
{
    // need to know all possible subsequences
    // it will be k ^ n || pow(k, n)
    // initial plan to generate all the sub sequences store them and match with the sequence m if it is not present cout which one

    int n, k, m;
    cin >> n >> k >> m;
    string s;
    cin >> s;

    string current = "";

    vc chars(k);
    for(int i = 0; i < k; i++){
        chars[i] = 'a' + i;
    }
    if(generate(chars, current, n, s)){
        return;
    }
    //checking all the subs

    cout << "YES" << nl;
}

int main()
{
    fastio;
    int t;
    cin >> t;
    for (T = 1; T <= t; T++)
    {
        solve();
    }

    return 0;
}