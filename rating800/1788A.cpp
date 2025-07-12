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
        int n; cin>>n;
        int arr[n];
        int count2 = 0;
        int count = 0;
        int countC = 0;
        for(int i = 0; i < n; i++){
            cin>>arr[i];
            if(arr[i] == 2)
            count2++;
        }
        int a = count2/2;
        if(count2 % 2 == 0){
            for(int i = 0; i < n; i++){
                if(arr[i] == 2)
                countC++;
                count++;
                if(countC == a)
                break;
            }
            cout<<count<<"\n";
        }
        else
        cout<<"-1\n";
    }
    return 0;
}