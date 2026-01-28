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

const int N = 100005;
const int MOD = 1e9 + 7;

struct Matrix{
    ll mat[2][2];

    Matrix(){
        mat[0][0] = mat[0][1] = mat[1][0] = mat[1][1] = 0;
    }
};

Matrix multiply(Matrix A, Matrix B){
    Matrix C;

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            for(int k = 0; k < 2; k++){
                C.mat[i][j] = (C.mat[i][j] + (A.mat[i][k] * B.mat[k][j])) % MOD;
            }
        }
    }
    return C;
}

Matrix power(Matrix A, ll p){
    Matrix res;
    res.mat[0][0] = 1;
    res.mat[1][1] = 1;
    A.mat[0][1] %= MOD;

    while(p > 0){
        if(p & 1) res = multiply(res, A);
        A = multiply(A, A);
        p >>= 1;
    }
    return res;
}


int main()
{
    fastio;
    // int t;
    // cin >> t;
    // t = 1;
    // for (T = 1; T <= t; T++)
    // {
    //     solve();
    // }

    ll n; cin >> n;
    Matrix T;

    T.mat[0][0] = 0;
    T.mat[0][1] = 3;
    T.mat[1][0] = 1;
    T.mat[1][1] = 2;

    T = power(T, n);

    cout << T.mat[0][0] << nl;

    return 0;
}