#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr)

int main()
{
    fastio;
    string s; int m;
    cin >> s >> m;

    vector <int> valuesL;
    vector <int> valuesR;
    vector <int> ans;

    int parity = 0;
    for(int i = 1; i <= 10; i++){
        if(s[i - 1] == '1'){
            if(parity % 2 == 0) valuesL.push_back(i), parity = 1;
            else valuesR.push_back(i), parity = 0;
        }
    }

    // this part is fine
    if( (valuesL.size() + valuesR.size()) == 1 && m != 1){
        cout<<"NO\n";
        return 0;
    }

    //testing this part is fine
    // for(auto it : valuesL)
    //     cout<<it<<" ";
    //     cout<<endl;
    // for (auto it : valuesR)
    //     cout << it << " ";
    //     cout<<endl;

    bool possible = true;

    int l = valuesL.size() - 1;
    int r = valuesR.size() - 1;
    ll left = 0;
    ll right = 0;

    for(int i = 0; i < m; i++){

        if(i % 2 == 0){
            if (left + valuesL[l] > right)
            {
                while(true){
                    if (left + valuesL[l] < right + valuesR[r]){
                        ans.push_back(valuesL[l]);
                        l++;
                        if (l >= valuesL.size())
                            l--;
                        break;
                    } else {
                        l--;
                        if(l < 0){
                            possible = false;
                            break;
                        }
                    }
                }
            }
            else
            {
                cout<<"reached here on left"<<i<<"\n";
                possible = false;
                break;
            }
        } else {

            if (right + valuesR[r] > left)
            {
                while (true)
                {
                    if (left + valuesL[l] > right + valuesR[r])
                    {
                        ans.push_back(valuesL[r]);
                        r++;
                        if (r >= valuesR.size())
                            r--;
                        break;
                    }
                    else
                    {
                        r--;
                        if (r < 0)
                        {
                            possible = false;
                            break;
                        }
                    }
                }
            }
            else
            {
                cout << "reached here on right" << i << "\n";
                possible = false;
                break;
            }
        }
    }

    if(possible){
        cout<<"YES\n";
        for(auto it : ans)
            cout<<it<<" ";
        cout<<"\n";
    } else {
        cout<<"NO\n";
    }
    return 0;
}
