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
        set<int> st;
        for (int i = 0; i < n; i++)
        {
            st.insert(arr[i]);
        }

        vector<int> b;
        vector<int> c;
        if (st.size() > 1)
        {
            sort(arr, arr + n);
            c.push_back(arr[n - 1]);
            for (int i = 0; i < n - 1; i++)
                b.push_back(arr[i]);

            cout << b.size() << " " << c.size() << "\n";

            
            for (int i = 0; i < n - 1; i++)
                cout << b[i] << " ";
                cout << "\n";
            cout << c[0] << "\n";
        }
        else
            cout << "-1\n";
    }
    return 0;
}