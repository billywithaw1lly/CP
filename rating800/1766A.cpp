#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int count = 0;

        if(n<10){
            cout<<n<<"\n";
        }
        else if(n>9 && n < 100){
            count = 9;
            int dig = n / 10;
            count = count + dig;
            cout<<count<<"\n";
        }
        else if (n > 99 && n < 1000){
            count = 18;
            int dig = n / 100;
            count = count + dig;
            cout<<count<<"\n";
        }
        else if(n > 999 && n < 10000){
            count = 27;
            int dig = n / 1000;
            count = count + dig;
            cout<<count<<"\n";
        }
        else if(n > 9999 && n < 100000){
            count = 36;
            int dig = n / 10000;
            count = count + dig;
            cout<<count<<"\n";
        }
        else{
            count = 45;
            int dig = n / 100000;
            count = count + dig;
            cout<<count<<"\n";
        }
    }
    return 0;
}
