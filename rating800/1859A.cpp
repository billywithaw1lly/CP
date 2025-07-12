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
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        sort(arr, arr + n);
        set<int> st(arr, arr + n); 

        vector<int> b, c;
        if (st.size() > 1)
        {
            int last = *st.rbegin();
            
            for (int i = 0; i < n; i++)
            {
                if (arr[i] == last)
                    c.push_back(arr[i]); 
                else
                    b.push_back(arr[i]); 
            }

            cout << b.size() << " " << c.size() << "\n";

            for (int i = 0; i < (int)b.size(); i++) 
                cout << b[i] << " ";
            cout << "\n";

            for (int i = 0; i < (int)c.size(); i++) 
                cout << c[i] << " ";
            cout << "\n";
        }
        else
            cout << "-1\n";
    }
    return 0;
}