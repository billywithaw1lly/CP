#include <bits/stdc++.h>
using namespace std;
using int64 = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while(T--){
        int64 n, m;
        cin >> n >> m;

        int t_found = 0;
        int64 m_max_t = -1, m_min_t = -1;
        for(int t = 1; t <= n; ++t){
            int64 t2 = (int64)t * t;
            int64 Mmax = (2*n*t - t2 + t) / 2;
            int64 Mmin = (t2 - t + 2*n) / 2;
            if (Mmin <= m && m <= Mmax){
                t_found = t;
                m_max_t = Mmax;
                m_min_t = Mmin;
                break;
            }
        }
        if(!t_found){
            cout << "-1\n";
            continue;
        }

        int t = t_found;
        int64 delta = m_max_t - m;

        cout << t << "\n";

        for(int v = t; v > 1; --v){
            cout << v << " " << (v-1) << "\n";
        }
        for(int j = t+1; j <= n; ++j){
            int64 drop = 0;
            if(delta > 0){
                drop = min<int64>(delta, t-1);
                delta -= drop;
            }
            int parent = t - (int)drop; 
            cout << parent << " " << j << "\n";
        }
    }
    return 0;
}
