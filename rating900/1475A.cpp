#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin>>n;

        bool found = false;
        // for(ll i = 3; i <= n; i+=2)
        // {
        //     if(n % i == 0)
        //     {
        //         cout<<"YES\n";
        //         found = true;
        //         break;
        //     }
        // }

        while(n>2){
            if(n % 2 != 0)
            {
                found = true;
                break;
            }
            else 
            n = n / 2;
        }
        if(!found)
        cout<<"NO\n";
        else
        cout<<"YES\n";
    }
    return 0;
}